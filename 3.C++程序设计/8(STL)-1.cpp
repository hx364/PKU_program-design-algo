//
//  main.cpp
//  pkuca7_1
//
//  Created by xu how on 4/21/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main() {
    int a[] = {8,7,8,9,6,2,1};
    // 在此处补充你的代码
    set<int> v(a, a+7);
    ostream_iterator<int> o(cout," ");
    copy( v.begin(),v.end(),o);
    return 0;
}