//
// Created by 何承洋 on 24-9-30.
//
#include <iostream>
using namespace std;
int gcd(int a,int b)
{ int c=0;
    while(b!=0) {
        c=b;
        b=a%b;
        a=c;

    }
    return a;
}
int main() {
    int x=0;
    int c=0;//分子
    int d=1;//分母
    cin>>x;
    for(int i=0;i<x;++i) {
        int a,b;
        cin>>a>>b;
        c=c*b+a*d;
        d=d*b;
    }
    int h,e;
    h=c/gcd(c,d);
    e=d/gcd(c,d);
    cout<<h<<" "<<e<<endl;
    return 0;
}