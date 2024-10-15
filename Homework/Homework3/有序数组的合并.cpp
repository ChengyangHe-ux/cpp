//
// Created by 何承洋 on 24-10-12.
//
#include <iostream>
using namespace std;
void Output(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int Merge(int a[],int n1,int b[],int n2,int c[]) {
    int i=0,j=0,k=0;
    while(i<n1 && j<n2) {
        if(a[i]<b[j]) {
            c[k++]=a[i++];

        } else {
            c[k++]=b[j++];
        }
    }
        while(i<n1) {
            c[k++]=a[i++];
        }
        while(j<n2) {
            c[k++]=b[j++];
        }
        return k;
 }
int main() {

    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3],d[10000],e[10000];
    for(int i=0;i<n1;i++){cin>>a[i];};
    for(int i=0;i<n2;i++){cin>>b[i];};
    for(int i=0;i<n3;i++){cin>>c[i];};
    int l1=Merge(a,n1,b,n2,d);
    int l2=Merge(a,n1,c,n3,e);
    Output(d,l1);
    Output(e,l2);
    return 0;
}