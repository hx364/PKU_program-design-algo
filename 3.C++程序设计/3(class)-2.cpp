//
//  main.cpp
//  pkuca_3
//
//  Created by xu how on 4/3/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
class Sample{
public:
    int v;
    Sample(int n):v(n) { }
    // 在此处补充你的代码
    Sample(Sample const &a):v(a.v*2){}
};
int main() {
    Sample a(5);
    Sample b = a;
    cout << b.v;
    return 0;
}