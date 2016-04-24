//
//  main.cpp
//  pku4_3
//
//  Created by xu how on 2/28/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
int mat[22][22];

bool ispeak(int i, int j, int m, int n){
    bool flag = true;
    if (i==0) {
        flag = flag && mat[i][j]>=mat[i+1][j];
    } else if (i==m-1) {
        flag = flag && mat[i][j]>=mat[i-1][j];
    } else {
        flag = flag && mat[i][j]>=mat[i-1][j] && mat[i][j]>=mat[i+1][j];
    }
    
    if (j==0) {
        flag = flag && mat[i][j]>=mat[i][j+1];
    } else if (j==n-1) {
        flag = flag && mat[i][j]>=mat[i][j-1];
    } else {
        flag = flag && mat[i][j]>=mat[i][j-1] && mat[i][j]>=mat[i][j+1];
    }
    return flag;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int m, n;
    cin >> m >> n;
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (ispeak(i, j, m, n)) {
                cout << i << ' ' << j << endl;
            }
        }
    }
    return 0;
    
}
