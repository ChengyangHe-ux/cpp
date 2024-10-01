//
// Created by 何承洋 on 24-9-30.
//
#include <iostream>
using namespace std;
int gcd(int a,int b)
{   while(b!=0) {
    int c=b;
    b=a%b;
    a=c;
    }
    return a;
}
int main() {
    int x;
    cin>>x;
    int b;
    cin>>b;
    for(int i=1;i<x;i++) {
        int a;
        cin>>a;
        b=gcd(b,a);
    }
    cout<<b<<endl;


    return 0;
}
