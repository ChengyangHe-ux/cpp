//
// Created by 何承洋 on 24-11-2.
//
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector <int> dp(n+1,n+1);
    dp[1]=0;
    for(int i=1;i<=n;i++) {
        dp[i]=min(dp[i],dp[i-1]+1);
        if(i%2==0)
            dp[i]=min(dp[i],dp[i/2]+1);
    }
    cout<<dp[n]<<endl;
    return 0;
}