//
//  main.cpp
//  pku6_5
//
//  Created by xu how on 8/17/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>
#include <math.h>

int main(){
    // insert code here...
    int max_odd=-1;
    int min_even=102;
    int list[6];
    for (int i=0; i<6; i++) {
        std::cin>>list[i];
    }
    
    for (int i=0; i<6; i++) {
        int current;
        current=list[i];
        
        //check odd
        if (current % 2 ==1) {
            if (current>max_odd) {
                max_odd=current;
            }
        }else{
            if (current<min_even) {
                min_even=current;
            }
        }
    }
    
    std::cout << abs(max_odd-min_even);
    return 0;
}
