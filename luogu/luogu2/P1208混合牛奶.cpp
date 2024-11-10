//
// Created by 何承洋 on 24-10-28.
//
#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[m][2];
    for(int i=0;i<m;i++) {
        for(int j=0;j<2;j++) {
            cin>>arr[i][j];
        }
    }
        for(int i=0;i<m;i++) {
            int minindex=i;
            for(int j=i+1;j<m;j++) if(arr[j][0]<arr[minindex][0]) minindex=j;
            if(minindex!=i) {
                int temp=arr[i][0];int temp2=arr[i][1];
                arr[i][0] = arr[minindex][0];
                arr[i][1] = arr[minindex][1];
                arr[minindex][0]=temp;
                arr[minindex][1]=temp2;
            }
        }
    int sum,count=0,temp=n;
    int i;
    for(i=0;i<m;i++) {
        sum+=arr[i][1];
        if (sum>=n) break;
    }
    for(int j=0;j<i;j++) count+=arr[j][0]*arr[j][1];


    
    for(int j=0;j<i;j++) temp=temp-arr[j][1];
    count+=temp*arr[i][0];
    cout<<count<<endl;
    return 0;
}