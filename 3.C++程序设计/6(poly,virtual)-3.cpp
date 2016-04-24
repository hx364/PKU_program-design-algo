//
//  main.cpp
//  pkuca5_3
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
    virtual void Do()
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
    { cout << "C::Do" << endl; }
    void Fun()
    { cout << "C::Fun" << endl; }
};
void Call(A *p) {
    p->Fun(); p->Do();
}
int main() {
    Call( new A() );
    Call( new C() );
    return 0;
}