//
// Created by 何承洋 on 24-10-7.
//

#include <iostream>
using namespace std;
void select(int arr[],int size) {
    for(int i=0;i<size;i++) {
        int minindex=i;
        for(int j=i+1;j<size;j++) {
            if(arr[j]<arr[minindex]) {
                minindex=j;
            }
        }
        if(minindex!=i) {
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
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