//
//  main.cpp
//  pku6_2
//
//  Created by xu how on 8/17/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {
    // insert code here...
    int n, x, y;
    std::cin>>n>>x>>y;
    double left=ceil((double) y/x);
    if (left>=n) {
        std::cout<<0;
    }else{
        std::cout<<(n-left);
    }
    return 0;
}
