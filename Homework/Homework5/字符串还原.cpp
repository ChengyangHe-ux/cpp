//
// Created by 何承洋 on 24-10-27.
//
#include <iostream>
using namespace std;

int main() {
    unsigned int num;
    cin >> num;
    unsigned int high = (num >> 16);
    unsigned int low = (num & 0xFFFF);
    unsigned int result = (low << 16) | high;
    cout << result << endl;

    return 0;
}
