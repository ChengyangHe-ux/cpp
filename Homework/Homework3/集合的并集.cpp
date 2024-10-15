//
// Created by 何承洋 on 24-10-10.
//
#include <iostream>
using namespace std;
int Search(int arr[], int n,int x) {
    for (int i = 0; i < n; i++) {
        if(arr[i] == x) {return i;}
    }
    return -1;
}
int SetUnion(int a[],int n1,int b[],int n2,int c[]) {
    int n3=0;
    for(int i=0;i<n1;i++) {
        if(Search(c,n3,a[i])==-1)
        c[n3++]=a[i];
    }
    for(int i=0;i<n2;i++){if(Search(a,n1,b[i])==-1) {
            c[n3++]=b[i];
    }

    }
    return n3;
}
void Output(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3],d[10000],e[10000];
    for(int i=0;i<n1;i++){cin>>a[i];};
    for(int i=0;i<n2;i++){cin>>b[i];};
    for(int i=0;i<n3;i++){cin>>c[i];};
    int l1=SetUnion(a,n1,b,n2,d);
    int l2=SetUnion(a,n1,c,n3,e);
    Output(d,l1);
    Output(e,l2);
    return 0;
}