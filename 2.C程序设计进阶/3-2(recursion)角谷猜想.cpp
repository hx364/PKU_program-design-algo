//
//  main.cpp
//  pku2_2
//
//  Created by xu how on 2/22/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int jiaogu(int s) {
    if (s == 1) {
        cout << "End";
    } else if (s%2 == 1) {
        cout << s << "*3+1="<< (3*s+1) << endl;
        jiaogu(3*s+1);
    } else if (s%2 == 0) {
        cout << s << "/2="<< s/2 << endl;
        jiaogu(s/2);
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    cin >> a;
    jiaogu(a);
    return 0;
}
