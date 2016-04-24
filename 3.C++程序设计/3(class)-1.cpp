//
//  main.cpp
//  pkuca_2
//
//  Created by xu how on 4/3/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
class A {
public:
    int val;
    A(int i=0){
        val = i;
    }
    int & GetObj(){
        return val;
    }

};
int main(int argc, const char * argv[]) {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
}