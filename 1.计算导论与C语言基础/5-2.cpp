//
//  main.cpp
//  pku5_2
//
//  Created by xu how on 8/16/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main() {
    // insert code here...
    int a1, a2;
    std::cin >> a1 >> a2;
    int nstart;
    if (a1 % 2 == 0) {
        nstart=a1+1;
    }else{
        nstart=a1;
    }
    int nsum=0;
    while(nstart<=a2){
        nsum+=nstart;
        nstart+=2;
    }
    std::cout << nsum;

    return 0;
}
