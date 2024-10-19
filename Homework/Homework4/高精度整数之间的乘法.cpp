//
// Created by 何承洋 on 24-10-17.
//
#include <iostream>
using namespace std;
void Output(int arr[],int n) {
    for(int i=n-1;i>=0;i--)
        cout<<arr[i];
    cout<<endl;
}
int stoa(string s,int a[]) {
    int n=s.length();
    for(int i=0;i<n;i++) {
        a[n-1-i]=s[i]-'0';
    }return n;
}
int Pow(int arr[],int n) {
    int jw=0;
    for(int i=0;i<n;i++) {
        int z=arr[i]*arr[i]+jw;
        jw=z/10;
        arr[i]=z%10;
    }
    while(jw>0) {
        arr[n++]=jw%10;
        jw=jw/10;
    }return sizeof arr[n];
}
int Mul(int x1[],int n1,int x2[],int n2,int x3[]) {
   x3[10000]=0;
    int i,jw=0;
for(i=0;i<n1;i++) {
    for(int j=0;j<n2;j++) {
        int z=jw+x1[i]*x2[j]+x3[i+j];
        jw=z/10;
        x3[i+j]=z%10;
    }
}while(jw>0) {x3[n1++]=jw%10;
    jw=jw/10;

}   int n3=n1+n2;
    while(x3[n3--]==0) n3--;
    return n3;
}
int main() {
    string x1,x2;
    int a[10000],b[10000],c[10000];
    int n1,n2;
    cin>>x1>>n1>>x2>>n2;
    stoa(x1,a);
    stoa(x2,b);
    int n3=Mul(a,n1,b,n2,c);
    Output(c,n3);
    return 0;
}