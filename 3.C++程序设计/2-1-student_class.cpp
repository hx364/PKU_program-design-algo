//
//  main.cpp
//  pkuca_1
//
//  Created by xu how on 3/30/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Student{
public:
    Student(char line[50]){
        sscanf(line, "%[^,],%d,%[^,],%d,%d,%d,%d", name, &age, stu_id, &grade_1, &grade_2, &grade_3, &grade_4);
    }
    
    void printStu(){
        int ave_score = (grade_1+grade_2+grade_3+grade_4)/4;
        cout<<name<<','<<age<<','<<stu_id<<','<<ave_score;
    }
    
private:
    char name[10];
    int age;
    char stu_id[10];
    int grade_1, grade_2, grade_3, grade_4;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    char line [50];
    cin>>line;
    Student stu = Student(line);
    stu.printStu();
    

}
