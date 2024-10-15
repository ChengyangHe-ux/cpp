//
// Created by 何承洋 on 24-10-10.
//
#include <iostream>
using namespace std;
int Remove(int arr[], int n,int x) {
    for(int i=x+1;i<n;i++) {
        arr[i-1]=arr[i];
    }
    return n-1;
}
int Unique(int a[],int n1) {
    for(int i=1;i<n1;i++) {
        for(int j=0;j<i;j++) {
            if(a[j]==a[i]) {
                n1=Remove(a,n1,i);
                i--;
                break;
            }
        }
    }
    return n1;
}
void Output(int a[],int n) {
    for(int i=0;i<n;i++) {cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++) {cin>>a1[i];}
    for(int i=0;i<n2;i++) {cin>>a2[i];}
    n1=Unique(a1,n1);
    n2=Unique(a2,n2);
    Output(a1,n1);
    Output(a2,n2);
    return 0;
}