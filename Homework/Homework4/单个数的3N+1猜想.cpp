//
// Created by 何承洋 on 24-10-18.
//
#include<iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int count=0;
    while(x!=1) {
        if (x%2!=0) x=3*x+1;
        else x=x/2;
        count++;
    }
    cout<<count<<endl;
    return 0;
}