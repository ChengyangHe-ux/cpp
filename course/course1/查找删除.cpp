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
    for(int i=k+1;i<n;i++) {
        arr[i-1]=arr[i];
    }
    return n-1;
}
int Search(int arr[],int n,int k) {
    for(int i=0;i<n;i++) {
        if (arr[i]==k) return i;
    }
    return -1;
}
int SearchRemove(int arr[],int n,int x) {
    int k=Search(arr,n,x);
    if(k==-1) return n;
    return RemoveAt(arr,n,k);
}
int main() {

    int a[20]={5,6,1,2,3,3,7,8}, n=8;
    Output(a,n);                      // 5,6,1,2,3,4,7,8
    n=SearchRemove(a,n,3);
    Output(a,n);


    return 0;
}