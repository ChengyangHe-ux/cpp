//
// Created by 何承洋 on 24-10-3.
//
#include <iostream>
using namespace std;
#include <climits>
int FindMaxNeg(int arr[],int size) {
    int min=INT_MIN;
    for(int i=0;i<size;i++) {
    if(arr[i]<0&&arr[i]>min) {
        min=arr[i];
    }

    }
    return min;
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++) {cin>>a[i];}
    for(int i=0;i<n2;i++) {cin>>b[i];}
    int max1=FindMaxNeg(a,n1);
    int max2=FindMaxNeg(b,n2);
    cout<<max1<<" "<<max2<<endl;
    return 0;
}