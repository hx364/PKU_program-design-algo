//
//  main.cpp
//  pku7_3
//
//  Created by xu how on 8/18/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>


int main() {
    // insert code here...
    int n, j;
    std::cin>>n;
    std::cin>>j;
    int a[n];
    
    for (int i=0; i<n; i++) {
        std::cin>>a[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    
    std::cout << a[n-j];
    return 0;
}
