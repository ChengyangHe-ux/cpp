//
// Created by 何承洋 on 24-10-7.
//
#include <iostream>
#include <queue>
using namespace std;
int main() {
    int N;
    cin>>N;
    int arr[N];
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<> > minHeap;
    for(int i=0;i<N;i++) {
        cin>>arr[i];
        if(maxHeap.empty()||maxHeap.top()>=arr[i]) {maxHeap.push(arr[i]);}
        else {minHeap.push(arr[i]);}
        if(maxHeap.size()>minHeap.size()+1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }else if (maxHeap.size()<minHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();}
        if((i+1)%2==1){cout<<maxHeap.top()<<endl;}
    }

    return 0;
}