//
//  main.cpp
//  pku4_1
//
//  Created by xu how on 2/25/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    double thresh;
    cin >> num >> thresh;
    int id[num];
    double val[num];
    for (int i=0; i<num; i++) {
        cin >> id[i] >> val[i];
    }
    
    //sort based on val;
    double temp;
    int temp_index;
    for (int i=0; i<num; i++) {
        for (int j=i; j<num; j++) {
            if (val[j]>val[i]) {
                temp = val[i];
                val[i] = val[j];
                val[j] = temp;
                
                temp_index = id[i];
                id[i] = id[j];
                id[j] = temp_index;
            }
        }
    }
    
    //print results
    if (val[0] < thresh) {
        cout << "None." << endl;
    } else {
        int i = 0;
        while (val[i]>=thresh) {
            cout << setfill('0') << setw(3) << id[i];
            cout << ' ';
            cout << setprecision(1)<< fixed << val[i] << endl;
            i++;
        }
    }
    
    return 0;
}
