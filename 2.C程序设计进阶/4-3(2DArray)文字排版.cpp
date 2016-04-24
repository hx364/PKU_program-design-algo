//
//  main.cpp
//  pku3_3
//
//  Created by xu how on 2/24/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    char text[n][40];
    for (int i = 0; i < n; i++) {
        cin >> text[i];
    }
    
    int linelength = -1;
    int i = 0;
    
    while (i<n) {
        while (linelength+strlen(text[i])+1<=80 && i<n) {
            if (linelength==-1) {
                cout << text[i];
            } else {
                cout << ' ';
                cout << text[i];
            }
            linelength+=(strlen(text[i])+1);
            i++;
        }
        cout << endl;
        linelength = -1;
    }
    return 0;
    
}