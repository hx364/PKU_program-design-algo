//
//  main.cpp
//  pku7_1
//
//  Created by xu how on 8/18/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
    // insert code here...
    int n;
    std::cin>>n;
    double score[4];
    
    for (int i=0; i<n; i++) {
        int patient;
        std::cin>>patient;
        if (patient<=18) {
            score[0]+=1;
        }else if (patient<=35){
            score[1]+=1;
        }else if (patient<=60){
            score[2]+=1;
        }else{
            score[3]+=1;
        }
    }
    std::cout<<std::fixed<<std::setprecision(2);
    
    std::cout<<"1-18: "<<double(score[0])/n*100<<"%"<<std::endl;
    std::cout<<"19-35: "<<double(score[1])/n*100<<"%"<<std::endl;
    std::cout<<"36-60: "<<double(score[2])/n*100<<"%"<<std::endl;
    std::cout<<"60-: "<<double(score[3])/n*100<<"%"<<std::endl;
    return 0;
}
