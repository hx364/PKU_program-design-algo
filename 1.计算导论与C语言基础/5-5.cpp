//
//  main.cpp
//  pku5_5
//
//  Created by xu how on 8/16/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    std::cin>>num;
    int a[num];
    for (int i=0; i<num; i++) {
        std::cin>>a[i];
    }
    
    int b[num];
    for (int i=0; i<num; i++) {
        b[i]=a[num-i-1];
    }
    
    for (int i=0; i<num; i++) {
        std::cout << b[i] << " ";
    }
    
    return 0;
}
