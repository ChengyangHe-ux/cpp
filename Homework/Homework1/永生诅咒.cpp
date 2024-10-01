//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
int fib(int x) {
    int a=1,b=1,c=1;
    for(int i=2;i<x;i++) {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main() {
    int x;
    cin>>x;
    int b=fib(x)/fib(x-2);
    cout<<b;
    return 0;
}


