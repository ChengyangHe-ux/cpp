//
// Created by 何承洋 on 24-10-12.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 将未序数组中的增序子序列有序合并的函数
void MergeSubs(vector<int> &arr) {
    vector<int> merged;
    vector<int> temp;

    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        temp.push_back(arr[i]);
        while (i < n - 1 && arr[i] <= arr[i + 1]) {
            temp.push_back(arr[i + 1]);
            ++i;
        }
        // 合并当前找到的增序子序列
        merged.insert(merged.end(), temp.begin(), temp.end());
        temp.clear();
    }

    arr = merged;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a1(n1), a2(n2);

    for (int i = 0; i < n1; ++i) {
        cin >> a1[i];
    }
    for (int i = 0; i < n2; ++i) {
        cin >> a2[i];
    }

    MergeSubs(a1);
    MergeSubs(a2);

    cout << "a1: ";
    for (int i : a1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "a2: ";
    for (int i : a2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}