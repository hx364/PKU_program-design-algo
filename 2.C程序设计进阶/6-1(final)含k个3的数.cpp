//
//  main.cpp
//  pkuc2_5_1
//
//  Created by xu how on 2/28/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int m, k;
    cin >> m >> k;
    bool flag = m%19==0;
    int three_count = 0;
    int n;
    while (m!=0) {
        n = m % 10;
        if (n==3) {
            three_count++;
        }
        m = m/10;
    }
    flag = flag && three_count==k;
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
