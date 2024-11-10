//
// Created by 何承洋 on 24-11-10.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=true;
    if(n==1) cout<<1;
    if(n%2==0) {
        for(int i=0;i<=n/2;i++) {
            if (s[i]!=s[i+2]) {
                flag=false;
            }
        }
        if (flag==true) {
            cout<<0;
        }
    } else {

    }

    return 0;
}