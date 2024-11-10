//
// Created by 何承洋 on 24-10-22.
//
#include<iostream>
using namespace std;
void Output(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    long long N;
    cin>>N;
    int n=2,i=0;
    int arr[10000]={0};
    while(N>1) {
        if(N%n==0) {
            N=N/n;arr[i++]=n;
        }
        else n++;
    }
    int count=0;

    return 0;
}



