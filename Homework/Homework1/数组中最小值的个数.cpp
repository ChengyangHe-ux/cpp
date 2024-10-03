//
// Created by 何承洋 on 24-10-3.
//
#include <iostream>
using namespace std;
int FindMinCount(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++) {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==min){
            count++;
        }
    }    return count;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a[10000],b[10000];
    for(int i=0;i<n1;i++){cin>>a[i];}
    for(int i=0;i<n2;i++){cin>>b[i];}
    int x1=FindMinCount(a,n1);
    int x2=FindMinCount(b,n2);
    cout<<x1<<" "<<x2<<endl;
    return 0;
}