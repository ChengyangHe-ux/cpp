//
// Created by 何承洋 on 24-10-26.
//
#include <iostream>
using namespace std;
#define k 2
void Output(int arr[],int n) {
    for(int i=n-1;i>=0;i--) {
        cout<<arr[i];
    }cout<<endl;
}
int main() {
    int x;
    cin>>x;
    int arr[x]={0};
    int xx=x,i=0;
    while(xx>0) {
        arr[i++]=xx%k;
        xx=xx/k;
    }
    Output(arr,i);
    return 0;
}