//
//  main.cpp
//  pkuca3_3
//
//  Created by xu how on 4/10/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
// 在此处补充你的代码

class Array2{
private:
    int nrow, ncol;
    int ** ptr;
public:
    Array2(int i=0, int j=0): nrow(i), ncol(j){
        //constructor
        if (i==0) {
            ptr=NULL;
        }
        else {
            ptr = new int* [nrow];
            for (int m=0; m<nrow; m++) {
                ptr[m] = new int[ncol];
            }
        }
    }
    
    ~Array2() {
        if (ptr){
            for (int m=0; m<nrow; m++) {
                delete [] ptr[m];
            }
            delete ptr;
        }
    }
    
    Array2(Array2 &a){
        //copy constructor
        if (a.ptr) {
            ptr=NULL;
            nrow=a.nrow;
            ncol=a.ncol;
        }
        ptr = new int* [nrow];
        for (int m=0; m<nrow; m++) {
            ptr[m] = new int[ncol];
            for (int n=0; n<ncol; n++) {
                ptr[m][n] = a.ptr[m][n];
            }
        }
    }
    
    Array2 & operator = (const Array2 & a){
        if (a.ptr) {
            ptr = NULL;
            nrow = a.nrow;
            ncol = a.ncol;
        }
        ptr = new int* [nrow];
        for (int m=0; m<nrow; m++) {
            ptr[m] = new int[ncol];
            for (int n=0; n<ncol; n++) {
                ptr[m][n] = a.ptr[m][n];
            }
        }
        return * this;
    }
    
    int * operator[](const int i){
        //overload []
        //delete [] ptr[0];
        
        return ptr[i];
    }
    int operator()(int i, int j){
        //overload ()
        return ptr[i][j];
    }
};

int main() {
    Array2 a(3,4);

    int i,j;
    for( i = 0;i < 3; ++i )
        for( j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for( i = 0;i < 3; ++i ) {
        for( j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    
    Array2 b;
    b=a;
    for( i = 0;i < 3; ++i ) {
        for( j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    
    return 0;
}