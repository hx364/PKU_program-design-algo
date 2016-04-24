//
//  main.cpp
//  pku5_3
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
    
    
    int one=0, five=0, ten=0;
    for (int i=0; i<num; i++) {
        if(a[i] == 1){
            one+=1;
        }else if (a[i]==5){
            five+=1;
        }else if (a[i]==10){
            ten+=1;
        }
    }
    
    std::cout <<one<<"\n"<<five<<"\n"<<ten;
    return 0;
}
