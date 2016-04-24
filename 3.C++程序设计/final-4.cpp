//
//  main.cpp
//  pku_final_4
//
//  Created by xu how on 4/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
// 在此处补充你的代码
class CType {
public:
    int val;
    void setvalue(int i=0){
        val = i;
    };
    CType & operator++(int){
        CType *nC = new CType;
        nC->setvalue(val);
        val*=val;
        return *nC;
    }
};

ostream & operator<<(ostream & o, CType & a){
    o<<a.val;
    return o;
}

int main(int argc, char* argv[]) {
    CType obj;
    int n;
    cin>>n;
    while ( n ) {
        obj.setvalue(n);
        cout<<obj++<<" "<<obj<<endl;
        cin>>n;
    }
    return 0;
}
