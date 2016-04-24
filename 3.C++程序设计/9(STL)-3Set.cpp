//
//  main.cpp
//  pkuca8_3
//
//  Created by xu how on 4/22/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <set>
#include <queue>
#include <stdlib.h>
using namespace std;

void add_func(multiset<int> & ans, set<int> & rec, int i){
    ans.insert(i);
    rec.insert(i);
    cout << ans.count(i) << endl;
}

void del_func(multiset<int> & ans, int i){
    cout << ans.count(i) << endl;
    pair<multiset<int>::iterator, multiset<int>::iterator> ret = ans.equal_range(i);
    ans.erase(ret.first, ret.second);
}

void ask_func(multiset<int> & ans, set<int> & rec, int i){
    if (rec.find(i) == rec.end()) {
        cout << 0 << ' ' << ans.count(i) << endl;
    } else {
        cout << 1 << ' ' << ans.count(i) << endl;
    }
}


int main(){
    multiset<int> ans;
    set<int> record;
    //read in
    int num_orders;
    cin >> num_orders;
    string ign, s2;
    getline(cin, ign);
    queue<string> orders;
    
    for (int i = 0; i < num_orders; i++)
    {
        getline(cin, s2);
        orders.push(s2);
    }
    
    int num;
    string cmd;
    for (int i = 0; i < num_orders; i++)
    {
        ign = orders.front();
        orders.pop();
        cmd = ign.substr(0, 3);
        num = atoi(ign.substr(4).c_str());
        
        if (cmd == "add") {	add_func(ans, record, num); }
        else if (cmd == "del") {	del_func(ans, num); }
        else if (cmd == "ask") { ask_func(ans, record, num); }
    }
    
    return 0;
    
}
