//
//  main.cpp
//  pku_final_3
//
//  Created by xu how on 4/23/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
// 在此处补充你的代码
int sqr(int n) {
    return n * n;
}

int sum(int a[], int n, int (*func)(int)){
    int ans=0;
    for (int i=0; i<n; i++) {
        ans+=(*func)(a[i]);
    }
    return ans;
}

int main() {
    int t, n, a[0x100];
    cin >> t;
    for (int c = 0; c < t; ++c) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << sum(a, n, sqr) << endl;
    }
    return 0;
}
