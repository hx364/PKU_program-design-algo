//
//  main.cpp
//  pku_final_5
//
//  Created by xu how on 4/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 在此处补充你的代码
class CMy_add{
public:
    int & sum;
    CMy_add(int &p): sum(p) {};
    void operator()(int n){
        sum += n%8;
    }
};


int main(int argc, char* argv[]) {
    int v, my_sum=0;
    vector<int> vec;
    cin>>v;
    while ( v ) {
        vec.push_back(v);
        cin>>v;
    }
    for_each(vec.begin(), vec.end(), CMy_add(my_sum));
    cout<<my_sum<<endl;
    return 0;
}
