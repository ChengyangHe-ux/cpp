//
// Created by 何承洋 on 24-10-10.
//
#include <iostream>
using namespace std;
int Search(int arr[], int n,int x){
  for(int i=0;i<n;i++){if(arr[i]==x) return i;}
  return -1;
}
int SetInter(int a[],int n1,int b[],int n2,int c[]){
  int n3=0;
  for(int i=0;i<n1;i++){
    if (Search(b,n2,a[i])==-1){c[n3++]=a[i];};
}
return n3;
}
void Output(int a[],int n){
  for(int i=0;i<n;i++){cout<<a[i]<<" ";}
  cout<<endl;
 }
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a1[n1],a2[n2],a3[n3],c1[10000],c2[10000];
    for(int i=0;i<n1;i++){cin>>a1[i];}
    for(int i=0;i<n2;i++){cin>>a2[i];}
    for(int i=0;i<n3;i++){cin>>a3[i];}
    int l1=SetInter(a1,n1,a2,n2,c1);
    int l2=SetInter(a1,n1,a3,n3,c2);
    Output(c2,l2);
    Output(c1,l1);
    return 0;
}