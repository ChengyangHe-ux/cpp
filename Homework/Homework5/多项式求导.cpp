//
// Created by 何承洋 on 24-10-27.
//
#include  <iostream>
using namespace std;
void Output(int arr[][2],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            cout<<arr[i][j]<<" ";
            if(j==1) cout<<endl;
        }
    }
}
int main() {
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        a[i][0]=a[i][0]*a[i][1];
    }
    for(int i=0;i<n;i++) {
        a[i][1]=a[i][1]-1;
    }
    Output(a,n);
    return 0;
}