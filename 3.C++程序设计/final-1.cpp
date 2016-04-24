//
//  main.cpp
//  pku_final_1
//
//  Created by xu how on 4/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//
#include<iostream>
using namespace std;
class Number {
public:
    int num;
    Number(int n=0): num(n) {};
    Number(Number & m): num(m.num){};
    // 在此处补充你的代码
    int operator*(Number m){
        return num*m.num;
    }
    operator int(){ return num; }
};

int main() {
    Number n1(10), n2(20);
    Number n3;
    n3 = n1*n2;
    cout << int(n3) << endl;
    return 0;
}