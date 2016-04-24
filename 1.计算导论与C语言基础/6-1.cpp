//
//  main.cpp
//  pku6_1
//
//  Created by xu how on 8/17/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main() {
    // insert code here...
    int n;
    int id[100];
    double rate[100];
    
    std::cin >> n;
    for (int i=0; i<n; i++) {
        int init, final;
        std::cin >> id[i] >> init >> final;
        rate[i] = (double)final/init;
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (rate[j+1]>rate[j]) {
                int tmpId = id[j];
                id[j] = id[j+1];
                id[j+1] = tmpId;
                
                double tmpRate = rate[j];
                rate[j]=rate[j+1];
                rate[j+1]=tmpRate;
            }
        }
    }
    
    //record the number
    double maxDiff=0;
    int maxIndex=0;
    for (int i=0; i<n-1; i++) {
        double diff = rate[i]-rate[i+1];
        if (diff>maxDiff) {
            maxDiff=diff;
            maxIndex=i;
        }
    }
    
    //output group A
    std::cout << maxIndex+1<<std::endl;
    for (int i=maxIndex; i>=0; i--) {
        std::cout<<id[i]<<std::endl;
    }
    
    //output group B
    std::cout << n-maxIndex-1<<std::endl;
    for (int i=n-1; i>=maxIndex+1; i--) {
        std::cout<<id[i]<<std::endl;
    }
    
    return 0;
}
