//
//  main.cpp
//  pku6_6
//
//  Created by xu how on 8/17/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {
    // insert code here...
    int n, n_hun, n_ten, n_one;
    std::cin>>n;
    n_hun=floor(n/100);
    n_ten=floor(n/10)-n_hun*10;
    n_one=n-100*n_hun-10*n_ten;
    
    std::cout<<n_hun<<std::endl;
    std::cout<<n_ten<<std::endl;
    std::cout<<n_one<<std::endl;
    
    return 0;
}
