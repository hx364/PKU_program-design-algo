//
//  main.cpp
//  pku_final_8
//
//  Created by xu how on 4/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t, n, i, j, ans;
    cin>>t;
    while (t--) {
        cin>>n>>i>>j;
        bitset<31> fn(n);
        bitset<31> output;
        output[i]=fn[i];
        output[j]=1-fn[j];
        for (int m=i+1; m<j; m++) {
            output[m]=1;
        }
        ans = (int) output.to_ulong();
        cout<<hex<<ans<<endl;
    }
    return 0;
}
