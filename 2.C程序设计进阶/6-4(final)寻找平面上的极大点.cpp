//
//  main.cpp
//  pkuc_5_4
//
//  Created by xu how on 2/28/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin >> n;
    int x[110], y[110];
    for (int i=0; i<n; i++) {
        cin >> x[i] >> y[i];
    }
    
    //sort
    int *px = x;
    int *py = y;
    int temp;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (*(px+i) > *(px+j)) {
                temp = *(px+i);
                *(px+i) = *(px+j);
                *(px+j) = temp;
                
                temp = *(py+i);
                *(py+i) = *(py+j);
                *(py+j) = temp;
            } else if (*(px+i) == *(px+j)) {
                if (*(py+i) > *(py+j)) {
                    temp = *(px+i);
                    *(px+i) = *(px+j);
                    *(px+j) = temp;
                    
                    temp = *(py+i);
                    *(py+i) = *(py+j);
                    *(py+j) = temp;
                }
            }
        }
    }
    
    bool first = true;
    for (int i=0; i<n; i++) {
        bool flag = true;
        for (int j=i+1; j<n; j++) {
            if (y[j]>=y[i]) {
                flag= false;
                break;
            }
        }
        if (flag) {
            if (first) {
                first = false;
                cout << '(' << x[i] << ',' << y[i] << ')';
                
            } else {
                cout << ',' << '(' << x[i] << ',' << y[i] << ')';
            }
        }
    }
    return 0;
}
