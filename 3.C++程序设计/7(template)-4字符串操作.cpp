//
//  main.cpp
//  pkuca6_4
//
//  Created by xu how on 4/20/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <set>
#include <stdlib.h>
using namespace std;



std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

void copy(string *p, vector<string> & ope, vector<string>::iterator index){
    int N=atoi((*(index+1)).c_str())-1;
    int X=atoi((*(index+2)).c_str());
    int L=atoi((*(index+3)).c_str());
    
    string cur_string = p[N].substr(X, L);
    ope.erase(index, index+4);
    ope.insert(index, cur_string);
}

void add(string *p, vector<string> & ope, vector<string>::iterator index){
    int s1=atoi((*(index+1)).c_str());
    int s2=atoi((*(index+2)).c_str());
    string cur_string;
    if (s1>0 && s1<99999 && s2>0 && s2<99999) {
        cur_string = to_string(s1+s2);
    } else {
        cur_string = (*(index+1))+(*(index+2));
    }
    ope.erase(index, index+3);
    ope.insert(index, cur_string);
}

void find(string *p, vector<string> &ope, vector<string>::iterator index){
    string S = *(index+1);
    int N = atoi((*(index+2)).c_str())-1;
    int cur_int;
    if (p[N].find(S)!=string::npos){
        cur_int=(int) p[N].find(S);
    }else{
        cur_int=(int) p[N].size();
    }
    string cur_string = to_string(cur_int);
    
    ope.erase(index, index+3);
    ope.insert(index, cur_string);
}

void rfind(string *p, vector<string> &ope, vector<string>::iterator index){
    string S = *(index+1);
    int N = atoi((*(index+2)).c_str())-1;
    int cur_int;
    if (p[N].rfind(S)!=string::npos){
        cur_int=(int) p[N].rfind(S);
    }else{
        cur_int=(int) p[N].size();
    }
    string cur_string = to_string(cur_int);
    
    ope.erase(index, index+3);
    ope.insert(index, cur_string);
}


void insert(string *p, vector<string> &ope, vector<string>::iterator index){
    string S = *(index+1);
    int N = atoi((*(index+2)).c_str())-1;
    int X = atoi((*(index+3)).c_str());
    
    string cur_string = p[N].insert(X, S);
    
    ope.erase(index, index+4);
    ope.insert(index, cur_string);
}


void reset(string *p, vector<string> &ope, vector<string>::iterator index){
    string S = *(index+1);
    int N = atoi((*(index+2)).c_str())-1;
    
    p[N]=S;
    string cur_string = S;
    ope.erase(index, index+3);
    ope.insert(index, cur_string);
}

void print(string *p, vector<string> &ope, vector<string>::iterator index){
    int N = atoi((*(index+2)).c_str())-1;
    string cur_string = p[N];
    cout<<cur_string;
    ope.erase(index, index+2);
}

void printall(string *p, vector<string> &ope, vector<string>::iterator index){
    for (int i=0; i<8; i++) {
        cout<<p[i];
    }
    ope.erase(index);
}





int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    set<string> operations={"copy", "add", "find", "rfind", "insert", "reset", "print", "printall"};
    
//    int n;
//    cin>>n;
//    string * p = new string[n];
//    for (int i=0; i<n; i++) {
//        cin>>p[i];
//    }
//    string ope;
//    getline(cin, ope);
//    while(cin) {
//        getline(cin, ope);
//        cout << ope << endl;
//        vector<string> ope_list = split(ope, ' ');
//        for (int i=0; i<ope_list.size(); i++) {
//            cout<<ope_list[i]<<endl;
//            
//        }
//        
//    };
    
    
    //test
    string *p = new string[3];
    p[0]="329strjvc";
    p[1]="Opadfk48";
    p[2]="Ifjoqwoqejr";
    
    string orders[7];
    orders[0]= "insert copy 1 find 2 1 2 2 2";
    orders[1]="print 2";
    orders[2]=    "reset add copy 1 find 3 1 3 copy 2 find 2 2 2 3";
    orders[3]=   "print 3";
    orders[4]=   "insert a 3 2";
    orders[5]=  "printall";
    orders[6]=  "over";
    
    for (int i=0; i<6; i++) {
        vector<string> ope_list = split(orders[i], ' ');
//        for (int i=0; i<ope_list.size(); i++) {
//            cout<<ope_list[i]<<endl;
//        }
        vector<string>::iterator pointer = ope_list.end();
        while (pointer!=ope_list.begin()) {
            if (operations.find(*pointer)!=operations.end()) {
                if (*pointer=="copy") copy(p, ope_list, pointer);
                if (*pointer=="add") add(p, ope_list, pointer);
                if (*pointer=="find") find(p, ope_list, pointer);
                if (*pointer=="rfind") rfind(p, ope_list, pointer);
                if (*pointer=="insert") insert(p, ope_list, pointer);
                if (*pointer=="reset") reset(p, ope_list, pointer);
                if (*pointer=="print") print(p, ope_list, pointer);
                if (*pointer=="printall") copy(p, ope_list, pointer);
                pointer--;
            } else{
                break;
            }
        }
    }
    
    
    delete []p;
    return 0;
}
