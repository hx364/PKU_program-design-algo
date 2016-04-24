//
//  main.cpp
//  pku3_1
//
//  Created by xu how on 2/24/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count;
    cin>>count;
    int sumList[count];
    for (int i=0; i<count; i++) {
        int row, col;
        int sumNum=0;
        cin >> row >> col;
        int mat[row][col];
        for (int m=0; m<row; m++) {
            for (int n=0; n<col; n++) {
                cin>>mat[m][n];
                if (m==0 || m==row-1 || n==0 || n==col-1) {
                    sumNum+=mat[m][n];
                }
            }
        }
        sumList[i] = sumNum;
    }
    for (int i=0; i<count; i++) {
        cout << sumList[i] << endl;
    }
}
