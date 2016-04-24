//
//  main.cpp
//  pkuca8_5
//
//  Created by xu how on 4/22/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int number;
    cin >> number;
    map<int, int> sheet;
    sheet.insert(make_pair(1000000000, 1));
    
    int id, val;
    pair<map<int, int>::iterator, bool> ret;
    queue<int> record_first;
    queue<int> record_last;
    int val_before, val_after;

    for (int i=0; i<number; i++) {
        cin >> id >> val;
        ret = sheet.insert(make_pair(val, id));
        record_first.push(id);
        
        if (ret.first == sheet.begin()) {
            ret.first++;
            record_last.push(ret.first->second);
        }
        else if(ret.first == --sheet.end()){
            ret.first--;
            record_last.push(ret.first->second);
        } else {
            ret.first++;
            val_after = ret.first->first - val;
            ret.first--;
            ret.first--;
            val_before = val - ret.first->first;
            
            if (val_before > val_after) {
                ret.first++;
                ret.first++;
                record_last.push(ret.first->second);
            } else {
                record_last.push((ret.first)->second);
            }
        }
    }
    
    for (int i=0; i<number; i++) {
        cout << record_first.front() << ' ' << record_last.front() << endl;
        record_first.pop();
        record_last.pop();
    }
    
    
    return 0;
}
