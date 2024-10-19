//
// Created by 何承洋 on 24-10-17.
//
#include<iostream>
using namespace std;
#define k 10
void Output(int arr[],int n) {
    for(int i=n-1;i>=0;i--) {
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
int Div(int arr[],int n,int y,int s[]) {
    int r=0;
    for(int i=n-1;i>=0;i--) {
        r=r*k+arr[i];
        s[i]=r/y;
        r=r%y;
    }return r;
}
int Normal(int arr[],int n) {
    while(arr[n-1]==0) n--;
    return n;
}
int main() {
    int x[100]={4,2,0,1}, n=4;  // 1024
    int y=11;
    int s[100];  // 商
    int r=Div(x,n, y, s);
    n=Normal(s,n); // n=2
    Output(s,n);   // 9 3
    cout<<r<<endl; // 1
    return 0;
}