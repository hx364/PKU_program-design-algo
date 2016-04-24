//
//  main.cpp
//  pku5_4
//
//  Created by xu how on 8/16/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    std::cin>>num;
    int a[num];
    for (int i=0; i<num; i++) {
        std::cin>>a[i];
    }
    
    for (int i=0; i<num; i++) {
        int ndigit=0, npower=0,remain=a[i];
        while (remain>0) {
            while (pow(2, npower)<=remain) {
                npower+=1;
            }
            remain-=pow(2, npower-1);
            npower=0;
            ndigit+=1;
        }
        std::cout << ndigit << "\n";
    }
    
    return 0;
}
