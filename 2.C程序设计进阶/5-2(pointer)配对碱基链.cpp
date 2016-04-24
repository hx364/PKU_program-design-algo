//
//  main.cpp
//  pku4_2
//
//  Created by xu how on 2/28/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    char str[1000][256] = {'\0'};
    for (int i=0; i<n; i++) {
        cin >> str[i];
    }
    
    for (int i=0; i<n; i++) {
        int j=0;
        char outStr[255] = {'\0'};
        while (str[i][j] != '\0') {
            if (str[i][j] == 'A') {
                outStr[j]= 'T';
            }
            if (str[i][j] == 'T') {
                outStr[j]= 'A';
            }
            if (str[i][j] == 'G') {
                outStr[j]= 'C';
            }
            if (str[i][j] == 'C') {
                outStr[j]= 'G';
            }
            j++;
        }
        cout << outStr << endl;
    }
    return 0;
}
