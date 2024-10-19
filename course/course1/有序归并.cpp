//
// Created by 何承洋 on 24-10-17.
//
#include <iostream>
using namespace std;
void Output(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int InsertAt(int arr[],int n,int k,int x) {
    if (k>=n||k<0) return n;
    for(int i=n;i>k;i--) {
        arr[i]=arr[i-1];
    }
    arr[k]=x;
    return n+1;
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
int Insert(int arr[],int n,int x) {
    int i;
    for(i=n-1;i>=0&&arr[i]>x;i--)
    {arr[i+1]=arr[i];}
    arr[i+1]=x;
    return n+1;
}
int Merge(int a[],int n1,int b[],int n2,int c[]) {
    int i,j,n3=0;
    while(i<n1&&j<n2) {
        if(a[i]>b[j]) c[n3++]=a[i++];
        else c[n3++]=b[j++];
    }
    while(i<n1) {
        c[n3++]=a[i++];
    }
    while(j<n2) {
        c[n3++]=b[j++


        ];
    }
}
int main() {
    int a[20]={11,22,33,44,55,66,77,88}, n=8;
    Output(a,n);      // 11,22,33,44,55,66,77,88
    n=Insert(a,n,60);
    Output(a,n);      // 11,22,33,44,55,60,66,77,88
    n=Insert(a,n,6);
    Output(a,n);      // 6,11,22,33,44,55,60,66,77,88
    n=Insert(a,n,600);
    Output(a,n);      // 6,11,22,33,44,55,60,66,77,88,600
    return 0;
}