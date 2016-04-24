//
//  main.cpp
//  pku2_3
//
//  Created by xu how on 2/22/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
char children[200] = {'\0'};
int addr[200] = {0};
char boy;
char girl;

void remove(int m, int n){
    for (int i=m; children[i]!='\0'; i++) {
        children[i] = children[i+1];
        addr[i] = addr[i+1];
    }
    for (int i=n-1; children[i]!='\0'; i++) {
        children[i] = children[i+1];
        addr[i] = addr[i+1];
    }
}

int detect() {
    if (children[0] =='\0') {
        return 0;
    }
    int i=0;
    int j=0;
    for (int n=0; children[n]!='\0'; n++) {
        if (children[n]==boy) {
            i = n;
        } else if (children[n]==girl) {
            j = n;
            break;
        }
    }
    cout << addr[i] << ' ' << addr[j] << endl;
    remove(i, j);
    detect();
    return 0;
}

int main(int argc, const char * argv[]) {
    
    cin.getline(children, 200);
    boy = children[0];
    
    //get the index list
    for (int i=0; children[i] != '\0'; i++) {
        addr[i] = i;
    }
    
    //get the char for boy and girl
    for (int i=0; children[i] != '\0'; i++) {
        if (children[i]!=boy) {
            girl = children[i];
            break;
        }
    }
    
    detect();
    return 0;
}
