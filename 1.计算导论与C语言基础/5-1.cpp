//
//  main.cpp
//  pku5_1
//
//  Created by xu how on 8/16/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    std::cin >> a;
    if (a==1 or a==3 or a==5) {
        std::cout << "NO";
    }else{
        std::cout << "YES";
    }
    return 0;
}
