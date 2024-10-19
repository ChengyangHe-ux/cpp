//
// Created by 何承洋 on 24-10-18.
//
#include<iostream>
using namespace std;
void Output(int arr[],int n) {
    for(int i=n-1;i>=0;i--) {
        cout<<arr[i];
    }cout<<endl;
}
int main() {
    int n;
    cin>>n;
    int nn=n;
    int i=0,count=0;
    int arr[10000]={0};
    while(nn>0) {
        arr[i++]=nn%10;
        nn=nn/10;
        count++;
    }
    int temp=arr[count-1];
    for(int i=count-1;i>0;i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    Output(arr,count);
    return 0;
}


