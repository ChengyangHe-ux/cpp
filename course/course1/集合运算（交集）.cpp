//
// Created by 何承洋 on 24-10-16.
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
    int m=0;
    for(int i=n-1;i>=0&&arr[i]>x;i--)
    {arr[i+1]=arr[i];m=i;}
    arr[m+1]=x;
    return n+1;
}
int InterSet(int a[],int n1,int b[],int n2,int c[]) {
    int n3=0;
    for(int i=0;i<n1;i++) {
        if (Search(b,n2,a[i])!=-1) {
            c[n3++]=a[i];
        }
    }
    return n3;
}
int main() {
    int a[10]={7,1,3,5,9}, na=5;
    int b[10]={6,7,2,3,9,4,5,8}, nb=8;
    int c[10], nc;
    Output(a,na);
    Output(b,nb);
    nc = InterSet(a,na, b,nb, c);	Output(c,nc);  // 7 3 5 9
    nc = InterSet(b,nb, a,na, c);	Output(c,nc);  // 7 3 9 5
    return 0;
}