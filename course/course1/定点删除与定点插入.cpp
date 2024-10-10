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
int Removeat(int arr[],int n,int x) {
    if(x<0||x>=n) return n;
    for(int i=x+1;i<n;i++) {
        arr[i-1]=arr[i];
    }
    return n-1;
}
int Insertat(int arr[],int n,int x,int k) {
    if(x<0||x>n) return n;
    for(int i=n;i>x;i--) {
        arr[i]=arr[i-1];
    }
    arr[x]=k;
    return n+1;
}
int main() {
    int a[20]={5,6,1,2,3,4,7,8}, n=8;
    Output(a,n);
    n=Removeat(a,n, 3);    Output(a,n);
    n=Insertat(a,n, 3,10); Output(a,n);
    n=Insertat(a,n, 3,11); Output(a,n);
    n=Insertat(a,n, 3,12); Output(a,n);
    n=Insertat(a,n, 3,13); Output(a,n);


    return 0;
}