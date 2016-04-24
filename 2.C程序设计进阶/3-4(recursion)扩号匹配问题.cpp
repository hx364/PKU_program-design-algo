//
//  main.cpp
//  pku2_4
//
//  Created by xu how on 2/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char boy, girl;
char c[105] = {};
char out[105] = {};

int mp(int n){
    if(c[n] == ')'){
        return n;
    }
    if(c[n] == '\0'){
        return n;
    }
    int r = n+1;
    
    while(c[r]!='\0' && c[r]!=')'){
        if(c[r] != '(' && c[r]!=')') {
            r+=1;
            continue;
        }
        r = mp(r);
    }
    if (c[r] == ')'){
        out[n] = ' ';
        out[r] = ' ';
        //cout << n << " " << r << endl;
        return r+1;//return to the next person of the girl
    }
    else{
        return r;
    }
    
}

int main(){
    while(cin.getline(c, 101)){
        int n = strlen(c);
        for(int i=0;i<n;i++){
            if(c[i]=='('){
                //cout << i<<'*';
                out[i] = '$';
            }
            else if(c[i] == ')'){
                //cout << i<<'*';
                out[i] = '?';
            }
            else{
                out[i] = ' ';
            }
        }
        //start our recursion
        int i = 0;
        while(i<n){
            if(c[i]=='('){
                i = mp(i);
            }
            else{
                i++;
            }
            
        }
        
        for(int i=0;i<n;i++){
            cout << c[i];
        }
        cout<< endl;
        
        for(int i=0;i<n;i++){
            cout << out[i];
        }
        cout<< endl;
    }
    
    return 0;
}
