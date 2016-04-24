//
//  main.cpp
//  pku_final_7
//
//  Created by xu how on 4/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <string>
#include <list>
using namespace std;

class A{
private:
    string name;
public:
    A(string n) :name(n){}
    friend bool operator < (const class A& a1, const class A &a2);
    friend bool operator == (const class A &a1, const class A &a2){
        if (a1.name.size() == a2.name.size())
            return true;
        else
            return false;
    }
    friend ostream & operator << (ostream &o, const A &a){
        o << a.name;
        return o;
    }
    string get_name() const{
        return name;
    }
    int get_size() const{
        return name.size();
    }
};

bool operator < (const class A& a1, const class A &a2){
    return a1.get_size()<a2.get_size();
}

class Print{
public:
    void operator()(string s){
        cout<<s<<' ';
    }
};

template<class T1, class F1>
void Show(T1 a1, T1 a2, F1 f1){
    for (T1 ite=a1; ite!=a2; ite++) {
        f1(ite->get_name());
    }
};

template<class T>
class MyLarge{
public:
    bool operator() (T & a1, T & a2){
        return a1.get_name().compare(a2.get_name())<0;
    }
};

// 在此处补充你的代码
int main(int argc, char* argv[])
{
    list<A> lst;
    int ncase, n, i = 1;
    string s;
    cin >> ncase;
    while (ncase--){
        cout << "Case: "<<i++ << endl;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> s;
            lst.push_back(A(s));
        }
        lst.sort();
        Show(lst.begin(), lst.end(), Print());
        
        cout << endl;
        lst.sort(MyLarge<A>());
        Show(lst.begin(), lst.end(), Print());
        cout << endl;
        lst.clear();
        
        
    }
    return 0;
}