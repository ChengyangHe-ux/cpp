//
// Created by 何承洋 on 24-10-18.
//
#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n]={0};
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    k=k-1;
    int temp=arr[k];
    for(int i=k;i>0;i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
