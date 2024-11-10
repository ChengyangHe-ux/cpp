//
// Created by 何承洋 on 24-10-27.
//
#include <iostream>
using namespace std;
int main() {
  int MOD=1234567;
    int n,k;
    cin>>n>>k;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    int count[k];
    for(int i=0;i<k;i++) count[i]=0;
    count[0]=1;
    long long sum=0;
    long long result=0;
    for(int i=0;i<n;i++) {
        sum+=nums[i];
        int temp=sum%k;
        result=(result+count[temp])%MOD;
        count[temp]++;
    }
    cout<<result<<endl;

    return 0;
}