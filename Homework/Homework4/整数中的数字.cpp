//
// Created by 何承洋 on 24-10-18.
//
#include <iostream>
using namespace std;

int main() {
    int xmin, xmax;
    cin >> xmin >> xmax;
    int count[10] = {0};
    for (int i = xmin; i <= xmax; i++) {
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            count[digit]++;
            num /= 10;
        }
    }
    int maxCount = 0, result = 9;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            result = i;
        } else if (count[i] == maxCount && i < result) {
            result = i;
        }
    }
    cout << result << endl;
    return 0;
}
