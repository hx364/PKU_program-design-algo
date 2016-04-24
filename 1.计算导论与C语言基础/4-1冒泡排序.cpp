//
//  main.cpp
//  pku_hw
//
//  Created by xu how on 8/16/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main() {
    int n, a[1000];
    std::cin >> n;
    for (int i=0; i<n; i++){
        std::cin >> a[i];
    }
    
    // compare
    for (int i=0; i<n-1; i++){
        for (int j=1; j<n-i; j++){
            if (a[j-1] > a[j]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    //std::cout << "Hello, World!\n";
    
    for (int i = 0; i<n; i++) {
        std::cout << a[i] << std::endl;
    }
    return 0;
}
