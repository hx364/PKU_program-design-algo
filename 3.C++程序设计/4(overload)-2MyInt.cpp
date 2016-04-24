//
//  main.cpp
//  pkuca3_2
//
//  Created by xu how on 4/10/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
class MyInt {
    int nVal;
public:
    MyInt(int n) { nVal = n; }
    int ReturnVal() { return nVal; }
    // 在此处补充你的代码
    MyInt & operator - (int i){
        nVal = nVal-i;
        return (* this);
    }
};
int main () {
    MyInt objInt(10);
    objInt-2-1-3;
    cout << objInt.ReturnVal();
    cout <<",";
    objInt-2-1;
    cout << objInt.ReturnVal();
    return 0;
}