//
// Created by 何承洋 on 24-11-2.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long f[20]={1};
    for(int i=1;i<=n;i++) {
        for(int j=0;j<i;j++){
            f[i]+=f[j]*f[i-j-1];
        }
    }
    cout<<f[n]<<endl;
    return 0;
}