//
// Created by 何承洋 on 24-11-10.
//
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>> c;
    if(a>b) cout<<-1;
    else
        if (c>a)
            cout<<c-a;
        else
            cout<<0;
    return 0;
}