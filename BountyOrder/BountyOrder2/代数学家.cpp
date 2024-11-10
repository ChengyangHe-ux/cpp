//
// Created by 何承洋 on 24-10-23.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> dp(m + 1, 0);
    vector<int> count(m + 1, 0);
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int maxLength = 0;
    for (int i = 1; i <= m; i++) {
        if (count[i] == 0) continue;
        dp[i] += count[i];
        for (int j = 2 * i; j <= m; j += i) {
            dp[j] = max(dp[j], dp[i]);
        }
        maxLength = max(maxLength, dp[i]);
    }
    cout << maxLength << endl;
    return 0;
}
