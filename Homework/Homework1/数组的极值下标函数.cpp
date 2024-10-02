//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
int FindiMax(int arr[],int size) {
    int max=0;
    for(int i=1;i<size;i++) {
        if (arr[i]>arr[max]){
            max=i;
        }
    }
    return max;
}
int main() {
    int a[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];

    }
    int max=FindiMax(a,n);
    cout<<max<<endl;
    return 0;
}




