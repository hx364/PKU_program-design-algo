//
//  main.cpp
//  pku7_2
//
//  Created by xu how on 8/18/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main() {
    // insert code here...
    int n;
    std::cin>>n;
    if (n>=95) {
        std::cout<<1;
    }else if (n>=90){
        std::cout<<2;
    }else if (n>=85){
        std::cout<<3;
    }else if (n>=80){
        std::cout<<4;
    }else if (n>=70){
        std::cout<<5;
    }else if (n>=60){
        std::cout<<6;
    }else{
        std::cout<<7;
    }
    return 0;
}
