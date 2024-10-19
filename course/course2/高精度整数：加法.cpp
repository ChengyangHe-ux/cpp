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
int stoa(string s,int x[]) {
    int n=s.length();
    for(int i=0;i<n;i++) {
        x[n-1-i]=s[i]-'0';
    }return n;
}
int Add(int a[],int n1,int b[],int n2,int c[]) {
    int i,jw=0;
    for(i=0;i<n1&&i<n2;i++) {
        int z=a[i]+b[i]+jw;
        jw=z/k;c[i]=z%k;
    }
    for(;i<n1;i++) {
        int z=a[i]+jw;
        jw=z/k;c[i]=z%k;
    }
    for(;i<n2;i++) {
        int z=b[i]+jw;
        jw=z/k;c[i]=z%k;
    }
    if(jw>0) {
        c[i++]=jw;
    }
return i;

}
int main() {
    string s1=  "123456789";
    string s2="99999999999";
    int x1[100], n1;
    n1=stoa(s1,x1);   Output(x1,n1);
    int x2[100], n2;
    n2=stoa(s2,x2);   Output(x2,n2);

    int x3[100], n3;
    n3=Add(x1,n1, x2,n2, x3);
    Output(x3,n3);   // 1
    return 0;
}