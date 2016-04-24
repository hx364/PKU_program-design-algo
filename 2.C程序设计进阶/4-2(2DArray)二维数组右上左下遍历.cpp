//
//  main.cpp
//  pku3_2
//
//  Created by xu how on 2/24/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int row, col;
    cin >>row>>col;
    int mat[row][col];
    for (int m=0; m<row; m++) {
        for (int n=0; n<col; n++) {
            cin>>mat[m][n];
        }
    }
    for (int i=0; i<row+col-1; i++) {
        for (int j=max(0, i+1-col); j<=min(i, row-1); j++) {
            cout << mat[j][i-j] << endl;
        }
    }
    return 0;
}
