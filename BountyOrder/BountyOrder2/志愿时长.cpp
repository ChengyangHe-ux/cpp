//
// Created by 何承洋 on 24-10-22.
//
#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    long long arr[N];
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++) {
        if (arr[i]==0) {cout<<"0";return 0;}
    }
    long long max=1e18;
    long long result=1;
    bool overtrue = false;
    for(int i=0;i<N;i++) {
        if(arr[i]!=0&&result< max/arr[i])
            result*=arr[i];
        else overtrue= true;
    }
    if(overtrue) cout<<-1;
    else cout<<result<<endl;
    return 0;
}

