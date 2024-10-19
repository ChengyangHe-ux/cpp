//
// Created by 何承洋 on 24-10-18.
//
#include<iostream>
using namespace std;
int main() {
    string A,B;
    int n;
    cin>>n>>A>>B;
    for(int i=0;i<n;i++) {
        B=B+A;
        A=A+B;
    }
    cout<<A<<endl;
    return 0;
}