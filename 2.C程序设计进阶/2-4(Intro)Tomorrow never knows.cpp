//
//  main.cpp
//  pku1_4
//
//  Created by xu how on 2/17/16.
//  Copyright (c) 2016 xu how. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int leapYear(int y){
    
    int leap = 0;
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ) {
        leap = 1;
    }
    return leap;
    
}

int day_in_month(int year, int m){
    
    int no_of_day;
    int ordinary_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int leap_month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    
    if (leapYear(year) == 1){
        no_of_day = leap_month[m-1];
    } else {
        no_of_day = ordinary_month[m-1];
    }
    
    return no_of_day;
}

int main(int argc, const char * argv[]) {
    int y, m, d, day_in_the_month;
    int year, month, day;
    scanf("%i-%i-%i",&y,&m,&d);
    
    year = y;
    month = m;
    day = d;
    
    day_in_the_month = day_in_month(year, month);
    
    if (day_in_the_month>day) {
        day++; //still in the same month, just change day++
    } else if (day_in_the_month == day) {
        day = 1; //change to next month
        if (month == 12) {
            year++;
            month = 1; //to next year
        } else {
            month++;
        }
    }
    printf("%04d-%02d-%02d",year,month,day);
    return 0;
    
}

