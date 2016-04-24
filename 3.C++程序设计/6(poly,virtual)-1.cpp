//
//  main.cpp
//  pkuca5_1
//
//  Created by xu how on 4/17/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;

class A {
private:
    int nVal;
public:
    void Fun()
    { cout << "A::Fun" << endl; }
    void Do()
    { cout << "A::Do" << endl; }
};

class B:public A {
public:
    virtual void Do()
    { cout << "B::Do" << endl; }
};

class C:public B {
public:
    void Do( )
    { cout << "C::Do" <<endl; }
    void Fun()
    { cout << "C::Fun" << endl; }
};


void Call(B & p) {
    p.Fun(); p.Do();
}


int main() {
    C c; Call(c);
    return 0;
}