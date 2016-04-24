//
//  main.cpp
//  pkuca7_2
//
//  Created by xu how on 4/21/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <vector>
#include <stdlib.h>
using namespace std;

void new_func(map<int, list<int> > & answers, vector<string> &orders){
    int id = atoi(orders[1].c_str());
    list<int> l;
    answers[id] = l;
}

void add_func(map<int, list<int> > & answers, vector<string> &orders){
    int id = atoi(orders[1].c_str());
    int num = atoi(orders[2].c_str());
    answers[id].push_back(num);
}

void merge_func(map<int, list<int> > & answers, vector<string> &orders){
    int id1 = atoi(orders[1].c_str());
    int id2 = atoi(orders[2].c_str());
    answers[id1].merge(answers[id2]);
    
}

void unique_func(map<int, list<int> > & answers, vector<string> &orders){
    int id = atoi(orders[1].c_str());
    answers[id].sort();
    answers[id].unique();
}

void out_func(map<int, list<int> > & answers, vector<string> &orders){
    int id = atoi(orders[1].c_str());
    answers[id].sort();
    if (answers[id].empty()) {
        cout<<endl;
        return;
    }
    for (list<int>::iterator ite = answers[id].begin(); ite!=answers[id].end(); ite++){
        cout<< *ite <<' ';
    }
    cout<<endl;
}



int main(int argc, const char * argv[]) {
    // read the orders
    int n;
    cin>>n;
    string ignore;
    getline(cin, ignore);
    string *p = new string[n];
    for (int i=0; i<n; i++) {
        getline(cin, p[i]);
    }
    
    map<int, list<int> > answers;
    
    
    for (int i=0; i<n; i++) {
        string str(p[i]);
        string buff;
        stringstream ss(str);
        vector<string> tokens;
        while (ss>>buff) {
            tokens.push_back(buff);
        }
        
       if (tokens[0]=="new") { new_func(answers, tokens);}
       else if (tokens[0]=="add") { add_func(answers, tokens);}
       else if (tokens[0]=="merge") { merge_func(answers, tokens);}
       else if (tokens[0]=="unique") { unique_func(answers, tokens);}
       else if (tokens[0]=="out") { out_func(answers, tokens);}
    }
    
    return 0;
}
