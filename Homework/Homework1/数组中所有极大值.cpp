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
    for(int i=0;i<size;i++){
        if(arr[i]>firstmax){
            secondmax = firstmax;
            secondindex = firstindex;
            firstmax = arr[i];
            firstindex = i;
        }else if(arr[i]>secondmax && arr[i]<firstmax){
            secondmax = arr[i];
            secondindex = i;
        }else if(arr[i]==firstmax){
            secondmax= arr[i];
        }
    }
    if(firstmax==secondmax) {
        int arr2[size]={0};
        int e=-1;
        for(int i=0;i<size;i++) {
            int d=arr[i];
            if(arr[i]==firstmax) {
                e++;
                arr2[e] = i;
            }
        }
        secondindex=arr2[1];
    }
    return secondindex;

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