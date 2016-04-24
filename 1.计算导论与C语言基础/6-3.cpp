//
//  main.cpp
//  pku6_3
//
//  Created by xu how on 8/17/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {
    // insert code here...
    int r, h, n;
    std::cin>>h>>r;
    double space = 3.14159*pow(r, 2)*h;
    n = ceil(20000/space);
    std::cout <<n;
    return 0;
}
