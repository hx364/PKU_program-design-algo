//
//  main.cpp
//  pkuca6_3
//
//  Created by xu how on 4/20/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...

    int i;
    cin>>i;
    cout<<hex<<i<<endl;
    cout<<dec<<setw(10)<<setfill('0')<<i<<endl;
    return 0;
}
