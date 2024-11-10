//
// Created by 何承洋 on 24-10-23.
//
#include <iostream>
using namespace std;

int main() {
    int L, N;  // 读取独木桥长度 L 和士兵数量 N
    cin >> L >> N;
    int arr[10000];  // 初始化数组，用于存储士兵的初始坐标

    for (int i = 0; i < N; i++) {
        cin >> arr[i];  // 读取每个士兵的初始坐标
    }

    int min_time = 0;  // 初始化最小时间
    int max_time = 0;  // 初始化最大时间

    // 遍历所有士兵，计算他们撤离独木桥的最小和最大时间
    for (int i = 0; i < N; i++) {
        int time_to_left = arr[i];      // 士兵到左端点 0 的时间
        int time_to_right = L - arr[i] + 1;  // 士兵到右端点 L+1 的时间

        // 更新最小时间，取每个士兵到两端中的较小值
        min_time = max(min_time, min(time_to_left, time_to_right));

        // 更新最大时间，取每个士兵到两端中的较大值
        max_time = max(max_time, max(time_to_left, time_to_right));
    }

    cout << min_time << " " << max_time << endl;  // 输出最小时间和最大时间

    return 0;
}
