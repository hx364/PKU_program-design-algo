//
//  main.cpp
//  pku_final_9
//
//  Created by xu how on 4/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
// 在此处补充你的代码
class A{
public:
    int num;
    char val;
    A(int i, char s='A'): num(i), val(s){};
};

class B: public A{
public:
    B(int i): A(i, 'B'){};
};

void Print(const A* s){
    cout << s->val <<' '<< s->num << endl;
};

struct Comp {
    bool operator()(const A* a1, const A* a2){
        return a1->num<a2->num;
    }
};

int main()
{
    
    int t;
    cin >> t;
    set<A*,Comp> ct;
    while( t -- ) {
        int n;
        cin >> n;
        ct.clear();
        for( int i = 0;i < n; ++i)	{
            char c; int k;
            cin >> c >> k;
            
            if( c == 'A')
                ct.insert(new A(k));
            else
                ct.insert(new B(k));
        }
        for_each(ct.begin(),ct.end(),Print);
        cout << "****" << endl;
    }
}