//
//  main.cpp
//  pkuca5_2
//
//  Created by xu how on 4/17/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//
#include <iostream>
using namespace std;
class A {
    // 在此处补充你的代码
public:
    virtual ~A() { cout << "destructor A" << endl; }
};
class B:public A {
public:
    ~B() { cout << "destructor B" << endl; }
};
int main() {
    A * pa;
    pa = new B;
    delete pa;
    return 0;
}