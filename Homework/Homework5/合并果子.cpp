//
// Created by 何承洋 on 24-10-27.
//
#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int,vector<int>,greater<int> > pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int weight;
        cin>>weight;
        pq.push(weight);
    }
    int sum=0;
    while(pq.size()>1) {
        int temp1=pq.top();pq.pop();
        int temp2=pq.top();pq.pop();
        int sum1=temp1+temp2;
        sum+=sum1;
        pq.push(sum1);
    }
    cout<<sum;
    return 0;
}