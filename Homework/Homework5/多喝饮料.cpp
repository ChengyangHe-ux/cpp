//
// Created by 何承洋 on 24-10-27.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = n;
    int emptyBottles = n;
    int caps = n;
    while (emptyBottles >= 3 || caps >= 4) {
        int newFromBottles = emptyBottles / 3;
        emptyBottles = emptyBottles % 3 + newFromBottles;
        caps += newFromBottles;
        total += newFromBottles;
        int newFromCaps = caps / 4;
        caps = caps % 4 + newFromCaps;
        emptyBottles += newFromCaps;
        total += newFromCaps;
    }
    cout << total << endl;
    return 0;
}
