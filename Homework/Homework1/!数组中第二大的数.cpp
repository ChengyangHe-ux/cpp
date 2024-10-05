//
// Created by 何承洋 on 24-10-3.
//
#include  <iostream>
#include <climits>
using namespace  std;
int FindiSecondMax(int arr[],int size) {
    if(size<2) {
        return -1;
    }
    int firstmax=INT_MIN;
    int secondmax=INT_MIN;
    int firstindex=-1;
    int secondindex=-1;
    for(int i=0;i<size;i++) {
        if(arr[i]>firstmax) {
            firstmax=arr[i];
            firstindex=i;
        }
    }
    for(int i=0;i<size;i++) {
        if(arr[i]>secondmax&&arr[i]<firstmax) {
            secondmax=arr[i];
            secondindex=i;
        }
    }int count=0;
    if(secondindex==-1) {
        int i;
        for(i=0;i<size;i++) {
            if(arr[i]==firstmax) {
                count++;
            }
        }if(count==2) return i;
    }return secondindex;
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a[n1]={0},b[n2]={0};
    for(int i=0;i<n1;i++) {cin>>a[i];}
    for(int i=0;i<n2;i++) {cin>>b[i];}
    cout<<FindiSecondMax(a,n1)<<" "<<FindiSecondMax(b,n2)<<endl;
    return 0;
}