//
//  main.cpp
//  pkuca6_1
//
//  Created by xu how on 4/20/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;

template <class T>
class CArray1D {
public:
    CArray1D(int i){
        p = new T[i];
    }
    CArray1D(): p(NULL){};
    ~CArray1D(){ delete[] p; }
    void set(int i){
        p = new T[i];
    }
    T & operator[](int i) {
        return p[i];
    }
private:
    T *p;
};


template <class T>
class CArray2D {
public:
    CArray2D(int i, int j): p(NULL){
        p = new CArray1D<T>[i];
        for (int m=0; m<i; m++) {
            p[i].set(j);
        }
    };
    CArray2D(): p(NULL) {};
    ~CArray2D(){ delete[] p; }
    void set(int i, int j){
        p = new CArray1D<T>[i];
        for (int m=0; m<i; m++) {
            p[m].set(j);
        }
    };
    CArray1D<T> & operator[](int i) const{
        return p[i];
    }
private:
    CArray1D<T> *p;
};

template <class T>
class CArray3D {
public:
    CArray3D(int i, int j, int k){
        p = new CArray2D<T>[i];
        for (int m=0; m<i; m++) {
            p[m].set(j, k);
        }
    };
    ~CArray3D(){ delete[] p; }
    CArray2D<T> & operator[](int i) const{
        return p[i];
    }
    
private:
    CArray2D<T> *p;
};



int main()
{
    CArray3D<int> a(3,4,5);
    int No = 0;
    for( int i = 0; i < 3; ++ i )
        for( int j = 0; j < 4; ++j )
            for( int k = 0; k < 5; ++k )
                a[i][j][k] = No ++;
    for( int i = 0; i < 3; ++ i )
        for( int j = 0; j < 4; ++j )
            for( int k = 0; k < 5; ++k )
                cout << a[i][j][k] << ",";
    return 0;
}
