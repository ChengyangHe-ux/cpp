//
// Created by 何承洋 on 24-10-18.
//
#include <iostream>
using namespace std;
int Remove(int arr[], int n,int x) {
    for(int i=x+1;i<n;i++) {
        arr[i-1]=arr[i];
    }
    return n-1;
}
int Unique(int a[],int n1) {
    for(int i=1;i<n1;i++) {
        for(int j=0;j<i;j++) {
            if(a[j]==a[i]) {
                n1=Remove(a,n1,i);
                i--;
                break;
            }
        }
    }
    return n1;
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2]={0};
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    int n3=n1+n2;
    int c[n3]={0};
    int i=0;
    for(i=0;i<n1;i++) {
        c[i]=a[i];
    }
    for(int j=0;j<n2;j++) {
        c[i++]=b[j];
    }
    n3=Unique(c,n3);
    cout<<n3;
    return 0;
}