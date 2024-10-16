//
// Created by 何承洋 on 24-10-10.
//
#include <iostream>
using namespace std;
void Output(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int RemoveAt(int arr[],int n,int k) {
    if(k>=n||k<0) return n;
    for(int i=k;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    return n-1;
}
int InsertAt(int arr[],int n,int k,int x) {
    if(k>=n||k<0) return n;
    for(int i=n;i>k;i--) {
        arr[i]=arr[i-1];
    }
    arr[k]=x;
    return n+1;
}
int main() {
    int a[20]={5,6,1,2,3,4,7,8}, n=8;
    Output(a,n);
    n=RemoveAt(a,n,3);
    Output(a,n);
    n=InsertAt(a,n, 3,10); Output(a,n); // 5,6,1,10,3,4,7,8
    n=InsertAt(a,n, 3,11); Output(a,n); // 5,6,1,11,10,3,4,7,8
    n=InsertAt(a,n, 3,12); Output(a,n); // 5,6,1,12,11,10,3,4,7,8
    n=InsertAt(a,n, 3,13); Output(a,n); // 5,6,1,13,12,11,,10,3,4,7,8
    return 0;
}
