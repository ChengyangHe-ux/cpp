//
// Created by 何承洋 on 24-9-30.
//
#include <iostream>
using namespace std;
int gcd(int a,int b) {
      int c=0;
    while(b!=0) {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}
int main() {
    int b1,a1;
    int b2,a2;
    cin>>b1>>a1;
    cin>>b2>>a2;
    int c=0;
    int d=0,e=0;
    d=a1*a2;
    e=b1*a2+a1*b2;
    c=gcd(d,e);
    int f,h=0;
    f=e/c;h=d/c;
    cout<<f<<" "<<h<<endl;

    return 0;
}