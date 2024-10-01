//
// Created by 何承洋 on 24-10-1.
//
#include <iostream>
using namespace std;

bool isleapyear(int a) {
    if (a%4==0&&a%100!=0||a%400==0)
    return true;
    else return false;
}
int main(){
    int year,month,days;
    cin>>year>>month>>days;
    int daysinmonth[]={31,28,31,40,31,30,31,31,30,31,30,31};
    if(isleapyear(year)) {
        daysinmonth[1]=29;
    }
    int totaldays=0;
    for(int i=0;i<month-1;i++) {
    totaldays=totaldays+daysinmonth[i];
    }
    totaldays=totaldays+days;
    cout << totaldays << endl;
    return 0;
}