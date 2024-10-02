//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
int FindiMinPos(int arr[],int size) {
    int temp=-1;
    for(int i=0;i<size;i++) {
        if(arr[i]>0){
            if(temp==-1||arr[i]<arr[temp]){
                temp=i;
            }
        }
    }return temp;
}
int main()
    {
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++) {cin>>a[i];}
    for(int i=0;i<n2;i++) {cin>>b[i];}
    cout<<FindiMinPos(a,n1)<<" "<<FindiMinPos(b,n2)<<endl;
    return 0;
   }