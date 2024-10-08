//
// Created by 何承洋 on 24-9-30.
//
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < N; i++) {
        if (maxHeap.empty() || arr[i] <= maxHeap.top()) {
            maxHeap.push(arr[i]);
        } else {
            minHeap.push(arr[i]);
        }
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        if ((i + 1) % 2 == 1) {
            cout << maxHeap.top() << endl;
        }
    }

    return 0;
}
