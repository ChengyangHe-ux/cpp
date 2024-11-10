//
// Created by 何承洋 on 24-11-10.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N,V;
    cin>>N>>V;
    vector<int> dp(V+1,0);
    for(int i=0;i<N;i++) {
        int vi,wi;
        cin>>vi>>wi;
        for(int j=V;j>=vi;j--) {
            dp[j]=max(dp[j],dp[j-vi]+wi);
        }
    }
    cout<<dp[V]<<endl;
    return 0;
}