//
// Created by 何承洋 on 24-10-14.
//
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int i=2;
    while(x>1) {
        if(x%i==0) {
            x=x/i;
            cout<<i<<" ";

        }else {
            i++;
        }
    }
    return 0;
}