//
// Created by 何承洋 on 24-10-27.
//
#include <iostream>
using namespace std;
int main() {
    int month1,days1,month2,days2;
    cin>>month1>>days1>>month2>>days2;
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int days=days1;
    int dayss=days2;
    for(int i=0;i<month1-2;i++) {
        days=months[i]+days;
    }
    for(int i=0;i<month2-2;i++) {
        dayss=months[i]+dayss;
    }
    days=dayss-days;
    cout<<days<<endl;
    return 0;
}