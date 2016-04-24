//
//  main.cpp
//  pkuc5_2
//
//  Created by xu how on 2/28/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct charandnum {
    char ch;
    int count;
};

int main() {
    struct charandnum s[550];
    char a[550];
    cin>>a;
    int i, j, l = 0;
    for (i = 0; a[i] != '\0'; i++) {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
            char temp;
            if (a[i] >= 'a')
                temp = a[i] - 32;
            else
                temp = a[i];
            bool found = false;
            for (j = 0; j< l; j++) {
                if (s[j].ch == temp) {
                    s[j].count++;
                    found = true;
                }
            }
            if (!found) {
                s[l].ch = temp;
                s[l].count = 1;
                l++;
            }
        }
    }
    charandnum temp;
    for (int i=0; i<l; i++) {
        for (int j=i+1; j<l; j++) {
            if (s[i].count < s[j].count) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    int max_num = s[0].count;
    for (int i=1; i<l; i++) {
        if (s[i].count<max_num) {
            temp = s[i];
            break;
        }
    }
    
    printf("%c+%c:%d\n", temp.ch, (char)(temp.ch + 32), temp.count);
    return 0;
}
