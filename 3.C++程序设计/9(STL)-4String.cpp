#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <set>
#include <stdlib.h>
using namespace std;


string to_string(int i){
    std::string s;
    std::stringstream out;
    out << i;
    s = out.str();
    return s;
}

bool Isint(const string & str){
    if (str.size()>5) return false;
    for (int i = 0; i<str.length(); i++){
        if (str[i] < '0' || str[i] > '9') return false;
    }
    return true;
}


void copy(string *p, vector<string> & ope, vector<string>::iterator & index){
    int N = atoi((*(index + 1)).c_str()) - 1;
    int X = atoi((*(index + 2)).c_str());
    int L = atoi((*(index + 3)).c_str());
    
    string cur_string = p[N].substr(X, L);
    
    index=ope.insert(index, cur_string);
    index++;
    for (int i = 0; i <4; i++)
    {
        index = ope.erase(index);
    }
    
}

void add(string *p, vector<string> & ope, vector<string>::iterator & index){
    string s1 = *(index + 1);
    string s2 = *(index + 2);
    string cur_string;
    if (Isint(s1) && Isint(s2)) {
        int s1_int = atoi((*(index + 1)).c_str());
        int s2_int = atoi((*(index + 2)).c_str());
        cur_string = to_string(s1_int + s2_int);
    }
    else {
        cur_string = s1+s2;
    }
    index = ope.insert(index, cur_string);
    index++;
    for (int i = 0; i <3; i++)
    {
        index = ope.erase(index);
    }
}

void find(string *p, vector<string> &ope, vector<string>::iterator &index){
    string S = *(index + 1);
    int N = atoi((*(index + 2)).c_str()) - 1;
    int cur_int;
    if (p[N].find(S) != string::npos){
        cur_int = (int)p[N].find(S);
    }
    else{
        cur_int = (int)p[N].size();
    }
    
    string cur_string = to_string(cur_int);
    
    index = ope.insert(index, cur_string);
    index++;
    for (int  i = 0; i <3; i++)
    {
        index=ope.erase(index);
    }
    
}

void rfind(string *p, vector<string> &ope, vector<string>::iterator &index){
    string S = *(index + 1);
    int N = atoi((*(index + 2)).c_str()) - 1;
    int cur_int;
    if (p[N].rfind(S) != string::npos){
        cur_int = (int)p[N].rfind(S);
    }
    else{
        cur_int = (int)p[N].size();
    }
    string cur_string = to_string(cur_int);
    
    index = ope.insert(index, cur_string);
    index++;
    for (int i = 0; i <3; i++)
    {
        index = ope.erase(index);
    }
}


void insert(string *p, vector<string> &ope, vector<string>::iterator & index){
    string S = *(index + 1);
    int N = atoi((*(index + 2)).c_str()) - 1;
    int X = atoi((*(index + 3)).c_str());
    
    p[N].insert(X, S);
    ope.clear();
    
}


void reset(string *p, vector<string> &ope, vector<string>::iterator &index){
    string S = *(index + 1);
    int N = atoi((*(index + 2)).c_str()) - 1;
    p[N].replace(0, p[N].size(), S, 0, S.size());
    ope.clear();
}

void print(string *p, vector<string> &ope, vector<string>::iterator &index){
    int N = atoi((*(index + 1)).c_str()) - 1;
    string cur_string = p[N];
    cout << cur_string<<endl;
    ope.clear();
}

void printall(string *p, int N, vector<string> &ope, vector<string>::iterator &index){
    for (int i = 0; i<N; i++) {
        cout << p[i] <<endl;
    }
    ope.clear();
}





int main(int argc, const char * argv[]) {
    string init[] = { "copy", "add", "find", "rfind", "insert", "reset", "print", "printall" };
    set<string> operations(init, init + sizeof(init) / sizeof(init[0]));
    
    int n;
    cin>>n;
    string * p = new string[n];
    for (int i=0; i<n; i++) {
        cin>>p[i];
    }
    string ope;
    getline(cin, ope);
    vector<string> orders;
    while(cin) {
        getline(cin, ope);
        if (ope=="over")
        {
            break;
        }
        orders.push_back(ope);
    };
    
    for (int i = 0; i<orders.size(); i++) {
        vector<string> ope_list;
        stringstream ss(orders[i]);
        string buff;
        while (ss >> buff) { ope_list.push_back(buff);}
        vector<string>::iterator pointer = ope_list.end();
        
        while (!ope_list.empty() && pointer != ope_list.begin()) {
            pointer--;
            //if it's a valid operation, go to do something
            if (operations.find(*pointer) != operations.end()) {
                
                if (*pointer == "copy") copy(p, ope_list, pointer);
                else if (*pointer == "add") add(p, ope_list, pointer);
                else if (*pointer == "find") find(p, ope_list, pointer);
                else if (*pointer == "rfind") rfind(p, ope_list, pointer);
                else if (*pointer == "insert") insert(p, ope_list, pointer);
                else if (*pointer == "reset") reset(p, ope_list, pointer);
                else if (*pointer == "print") print(p, ope_list, pointer);
                else if (*pointer == "printall") printall(p, n, ope_list, pointer);
            }
        }
    }
    
    delete[]p;
    return 0;
}