//
// Created by 何承洋 on 24-10-7.
//
#include <iostream>
using namespace std;
void select(int arr[],int size) {
    int temp;
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }

    }


}
int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<N;i+=2) {
        select(arr,i+1);
        int mid=arr[(i+1)/2];
        cout<<mid<<endl;
    }
    return 0;
}
