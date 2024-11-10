//
// Created by 何承洋 on 24-11-10.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int count=0;
    if(n%2==0) {
        for(int k=0;k<=n/2;k++) {
            if (arr[k]==arr[k+2]) {
                count++;
            }
        }
        if(count==(n/2)+1)
            cout<<0<<endl;
    }
    return 0;
}