//
//  main.cpp
//  pkuca_4
//
//  Created by xu how on 4/3/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
class Base {
public:
    int k;
    Base(int n):k(n) { }
};

class Big {
public:
    int v; Base b;
    // 在此处补充你的代码
    Big(int n): v(n), b(n) {}
    Big(const Big &m):v(m.v), b(m.v){}
};

int main() {
    Big a1(5); Big a2 = a1;
    cout << a1.v << "," << a1.b.k << endl;
    cout << a2.v << "," << a2.b.k << endl;
    return 0;
}