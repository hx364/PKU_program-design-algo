//
//  main.cpp
//  pkuc2_5_3
//
//  Created by xu how on 2/28/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a, b, c;
    char s1, s2;
    cin >> a >>s1>> b >>s2>> c;
    
    if (a+b==c) {
        cout << '+' << endl;
        return 0;
    }
    if (a-b==c) {
        cout << '-' << endl;
        return 0;
    }
    if (a*b==c) {
        cout << '*' << endl;
        return 0;
    }
    if (a/b==c) {
        cout << '/' << endl;
        return 0;
    }
    if (a%b==c) {
        cout << '%' << endl;
        return 0;
    }
    cout << "error" << endl;
    return 0;
}
