//
//  main.cpp
//  pkuca3_1
//
//  Created by xu how on 4/6/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;
class Complex {
private:
    double r,i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    void operator =(const string & st){
        char *cstr = new char[st.length() + 1];
        strcpy(cstr, st.c_str());
        this->operator=(cstr);
        delete [] cstr;
    }
    void operator = (char * str){
        int rs, is;
        sscanf(str, "%d+%di", &rs, &is);
        r = rs;
        i = is;
    }
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}