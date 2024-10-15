//
// Created by 何承洋 on 24-10-13.
//
#include <iostream>
using namespace std;
long long Mul(long long x,int n) {
    long long xx=1;
    for(int i=0;i<n;i++) {
        xx=x*xx;
    }
    return xx;
}
int main() {
    long long x;
    int n;
    cin>>x>>n;
    long long xx=Mul(x,n);
    cout<<xx;
    return 0;
}