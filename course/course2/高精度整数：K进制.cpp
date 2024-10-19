//
// Created by 何承洋 on 24-10-17.
//
#include<iostream>
using namespace std;
#define k 10000
void Output(int arr[],int n) {
    for(int i=n-1;i>=0;i--) {
        if(arr[i]<1000) cout<<"0";
        if(arr[i]<100) cout<<"0";
        if(arr[i]<10) cout<<"0";
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int Mul(int arr[],int n,int x) {
    int jw=0;
    for(int i=0;i<n;i++) {
        int z=arr[i]*x+jw;
        arr[i]=z%k;
        jw=z/k;
    }
    while(jw>0) {
        arr[n++]=jw%k;
        jw=jw/k;
    }return n;
}
int main() {

    int x[1000]={1}, n=1;  // 1
    //int x[100]={4,2,0,1}, n=4;  // 1024
    for(int i=1; i<=100; i++)
    {
        n=Mul(x,n, i);
        cout<<i<<": ";	Output(x,n);
    }
    return 0;
}