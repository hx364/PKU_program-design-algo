//
//  main.cpp
//  pku_final_2
//
//  Created by xu how on 4/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
class Number {
public:
    int num;
    Number(int n): num(n) {};
    // 在此处补充你的代码
    Number(Number & a): num(a.num) {};
    int & value(){ return num; }
    void operator+(Number & b) {
        num+=b.num;
    }
};
int main() {
    Number a(2);
    Number b = a;
    cout << a.value() << endl;
    cout << b.value() << endl;
    a.value() = 8;
    cout << a.value() << endl;
    a+b;
    cout << a.value() << endl;
    return 0;
}