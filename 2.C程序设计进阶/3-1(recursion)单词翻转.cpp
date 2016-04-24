//
//  main.cpp
//  pku2_1
//
//  Created by xu how on 2/22/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
char str[500]={'\0'};

int check(int i) {
    if (str[i] == '\0') {
        return 0;
    }
    //get the start index
    while (str[i] == ' ') {
        cout << ' ';
        i++;
    }
    //get the end index
    int j = i;
    while (str[j]!=' ' && str[j]!='\0') {
        j++;
    }
    for (int n=j-1; n>=i; n--) {
        cout << str[n];
    }
    check(j);
    return 0;
}

int main(int argc, const char * argv[]) {
    cin.getline(str, 500);
    check(0);
    return 0;
}
