//
// Created by 何承洋 on 24-10-3.
//
#include <iostream>
using namespace std;
void FindMaxs(int arr[],int size) {
    for( int i=0;i<size;i++) {
        if(i==0&&arr[i]>arr[i+1]){cout<<arr[i]<<" ";}
        else if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]) {
            cout<<arr[i]<<" ";
        }
        else if(i==size-1){cout<<arr[i]<<" ";}
    }
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++) {cin>>a[i];}
    for(int i=0;i<n2;i++) {cin>>b[i];}
    FindMaxs(a,n1);
    cout<<endl;
    FindMaxs(b,n2);
    return 0;
}