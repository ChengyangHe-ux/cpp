//
// Created by 何承洋 on 24-10-3.
//
#include <iostream>
using namespace std;
int FindAscCount(int arr[],int size) {
    int count=0;
    for(int i=0;i<size;i++) {
        if(i==size-1||arr[i]>=arr[i+1]) {
            count++;
        }
    }return count;
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a[n1]={0},b[n2]={0};
    for(int i=0;i<n1;i++){cin>>a[i];}
    for(int i=0;i<n2;i++){cin>>b[i];}
    cout<<FindAscCount(a,n1)<<" "<<FindAscCount(b,n2)<<endl;
    return 0;
}