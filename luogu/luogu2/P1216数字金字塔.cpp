//
// Created by 何承洋 on 24-11-2.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int r;
    cin>>r;
    vector<vector<int>>v(r);
    for(int i=0;i<r;i++) {
        v[i].resize(i+1);
        for(int j=0;j<=i;j++) {
            cin>>v[i][j];
        }
    }
    for(int i=r-2;i>=0;i--) {
        for(int j=0;j<=i;j++) {
            v[i][j]+=max(v[i+1][j+1],v[i+1][j]);
        }
    }
    cout<<v[0][0]<<endl;
    return 0;
}