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
int main() {

    return 0;
}