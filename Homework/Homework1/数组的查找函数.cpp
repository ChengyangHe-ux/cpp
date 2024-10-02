//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
int search(int arr[],int size,int x) {
    int xx=-1;
    for(int i=0;i<size;i++) {
        if(arr[i]==x){xx=i;break;}
    }
    return xx;
}
int main() {
    int a[10000],n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int xx=-1;
    xx=search(a,n,x);
    cout<<xx<<endl;
    return 0;
}