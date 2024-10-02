//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
void Insert(int arr[],int size,int x) {
    int i;
    for(i=size-1;i>=0&&arr[i]>x;i--){
        arr[i+1]=arr[i];
    }
        arr[i+1]=x;
        size++;
}
int main() {
    int a[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {cin>>a[i];}
    int x;
    cin>>x;
    Insert(a,n,x);
    for(int i=0;i<=n;i++) {cout<<a[i]<<" ";}
    return 0;
}