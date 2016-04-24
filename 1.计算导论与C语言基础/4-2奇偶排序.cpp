//
//  main.cpp
//  pku_hw2
//
//  Created by xu how on 8/16/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main() {

    //std::cout << "Please insert 10 numbers"<<std::endl;
    int a[10];
    for (int i=0; i<10; i++) {
        std::cin >> a[i];
    }
    
    //put odd to left, event to right
    int l=0, r=9;
    while (l <= r) {
        bool leftOdd = a[l]%2 == 1;
        bool rightEven = a[r]%2 == 0;
        if (leftOdd) {
            l++;
        } else if (rightEven){
            r--;
        } else if (!leftOdd && !rightEven){
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }
    
    
    
    int start = 0, end = l;
    for (int i =start; i<end-1; i++) {
        for (int j =start+1; j<start+end-i; j++) {
            if (a[j-1]>a[j]) {
                int temp =a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    
    start = l, end=10;
    for (int i =start; i<end-1; i++) {
        for (int j =start+1; j<start+end-i; j++) {
            if (a[j-1]>a[j]) {
                int temp =a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    
    
    //std::cout << "The output is:" << std::endl;
    for (int i=0; i<10; i++) {
        std::cout << a[i] << ' ';
    }
    return 0;
}
