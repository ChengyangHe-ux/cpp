//
// Created by 何承洋 on 24-11-2.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(n+1,n+1);
    v[0]=0;
    for(int i=1;i<=n;i++) {
        if(i>=1) v[i]=min(v[i],v[i-1]+1);
        if(i>=5) v[i]=min(v[i],v[i-5]+1);
        if(i>=11) v[i]=min(v[i],v[i-11]+1);
    }
    cout<<v[n]<<endl;
    return 0;
}