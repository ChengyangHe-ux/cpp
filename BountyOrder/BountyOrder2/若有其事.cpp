//
// Created by 何承洋 on 24-10-21.
//
#include<iostream>
using namespace std;
int count=0;
int Fibonacci(int x) {
    count++;
    if(x==0 || x==1) return 1;
    return Fibonacci(x-1)+Fibonacci(x-2);
}
int main() {
    int x;
    cin>>x;
    int xx=Fibonacci(x);
    cout<<count;
    return 0;
}