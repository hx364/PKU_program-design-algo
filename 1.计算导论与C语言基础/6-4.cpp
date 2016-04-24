//
//  main.cpp
//  pku6_4
//
//  Created by xu how on 8/17/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>

int main(){
    int n;
    std::cin>>n;
    int scores[n];
    for (int i=0; i<n; i++) {
        std::cin>>scores[i];
    }
    
    int maxscore=0;
    for (int i=0; i<n; i++) {
        if (scores[i]>maxscore) {
            maxscore=scores[i];
        }
    }
    
    std::cout<<maxscore;
    return 0;
}
