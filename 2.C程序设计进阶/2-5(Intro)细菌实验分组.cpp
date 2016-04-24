//
//  main.cpp
//  pkuc1_5
//
//  Created by xu how on 8/31/15.
//  Copyright (c) 2015 xu how. All rights reserved.
//

#include <iostream>
using namespace std;
void sort_list(float sheet_list[], int number);

int main(int argc, const char * argv[]) {
    // insert code here...
    int number;
    cin>>number;
    float sheet[number+1];
    float sheet_copy[number+1];
    
    
    int number_prev, number_after;
    for (int i=1; i<number+1; i++) {
        int group;
        cin>>group>>number_prev>>number_after;
        sheet[group] = float(number_after)/float(number_prev);
    }
    
    //copy the float list
    for (int i=0; i<number+1; i++) {
        sheet_copy[i] = sheet[i];
    }
    
    //sort sheet_copy
    sort_list(sheet_copy, number);
    
    return 0;
}

void sort_list(float sheet_list[], int number) {
    int index_list[number+1];
    for (int i=0; i<number+1; i++) {
        index_list[i] = i;
    }
    
    //insert sort
    for (int i=1; i<number+1; i++) {
        for (int j=i+1; j<number+1; j++) {
            if (sheet_list[i] > sheet_list[j]) {
                float temp = sheet_list[i];
                sheet_list[i] = sheet_list[j];
                sheet_list[j] = temp;
                
                int temp_i = index_list[i];
                index_list[i] = index_list[j];
                index_list[j] = temp_i;
                
            }
        }
    }
    
    float max_diff = 0;
    int diff_index = 1;
    for (int i=2; i<number+1; i++) {
        if (sheet_list[i] - sheet_list[i-1] > max_diff) {
            max_diff = sheet_list[i]-sheet_list[i-1];
            diff_index=i;
        }
        
    }
    cout<<(number-diff_index+1)<<'\n';
    for (int i=diff_index; i<number+1; i++) {
        cout<<index_list[i]<<'\n';
    }
    
    cout<<(diff_index-1)<<'\n';
    for (int i=1; i<diff_index; i++) {
        cout<<index_list[i]<<'\n';
    }
    
    
}
