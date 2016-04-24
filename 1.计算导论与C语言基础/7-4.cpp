//
//  main.cpp
//  pku7_4
//
//  Created by xu how on 8/18/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    std::cin>>n;
    
    std::cout<<n/100<<std::endl;
    n=n%100;
    std::cout<<n/50<<std::endl;
    n=n%50;
    std::cout<<n/20<<std::endl;
    n=n%20;
    std::cout<<n/10<<std::endl;
    n=n%10;
    std::cout<<n/5<<std::endl;
    n=n%5;
    std::cout<<n<<std::endl;
    
    return 0;
}
