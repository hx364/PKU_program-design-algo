//
//  main.cpp
//  pkuca3_4
//
//  Created by xu how on 4/10/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
class BigInt {
public:
    vector<int> intV;
    bool isPositive=true;


    BigInt(vector<int> s): intV(s){};
    BigInt(vector<int> s, bool b): intV(s), isPositive(b) {};
    
    BigInt() {};
    long size() const {
        return intV.size();
    }
    
};



istream & operator>>(istream & is, BigInt & a){
    //overload >> operator
    string s;
    is >> s;
    for (int i=0; i<s.size(); i++) {
        a.intV.push_back(s[i]-'0');
    }
    return is;
}

ostream & operator<<(ostream & o, const BigInt & a){
    //overload << operator
    if (!a.isPositive) {
        o<<'-';
    }
    int stIndex = 0;
    while (a.intV[stIndex]==0) {
        stIndex++;
    }
    for (int i=stIndex; i<a.intV.size(); i++) {
        o<<a.intV[i];
    }
    return o;
}

BigInt add(const BigInt & a, const BigInt & b){
    //a > b
    vector<int> c;
    //initialize c = b
    for (int i=0; i<a.size()-b.size(); i++) {
        c.insert(c.begin(), 0);
    }
    for (int i=0; i<b.size(); i++) {
        c.push_back(b.intV[i]);
    }
    //c+a
    for (long i=c.size(); i>0; i--) {
        c[i]+=a.intV[i];
        if (c[i]>=10) {
            c[i]-=10;
            c[i-1]+=1;
        }
    }
    //check the last digit
    c[0]+=a.intV[0];
    if (c[0]>=10) {
        c[0]-=10;
        c.insert(c.begin(), 1);
    }
    return BigInt(c);
}

vector<int> subtract(const BigInt & a, const BigInt & b){
    //a > b
    vector<int> c;
    //initialize c = b
    for (int i=0; i<a.size()-b.size(); i++) {
        c.insert(c.begin(), 0);
    }
    for (int i=0; i<b.size(); i++) {
        c.push_back(b.intV[i]);
    }
    
    for (long i=c.size()-1; i>=0; i--) {
        c[i] = a.intV[i]-c[i];
        if (c[i]<0) {
            c[i]+=10;
            c[i-1]+=1;
            
        }
    }
    return c;
}
    
BigInt operator+(const BigInt & a, const BigInt & b){
    if (a.size()>b.size()) {
        return add(a,b);
    } else{
        return add(b,a);
    }
}

BigInt operator-(const BigInt & a, const BigInt & b){
    if (a.size()>b.size()) {
        return BigInt(subtract(a,b), true);
    } else if (a.size()<b.size()){
        return BigInt(subtract(b,a), false);
    } else{
        int i = 0;
        while (i<a.size()) {
            if (a.intV[i]>b.intV[i]) {
                return BigInt(subtract(a, b), true);
            } else if (a.intV[i]<b.intV[i]){
                return BigInt(subtract(b, a), false);
            }
            i++;
        }
    }
    return BigInt();
}





int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    BigInt a, b;
    cin>>a>>b;
    cout<<(a-b);
    
    return 0;
}
