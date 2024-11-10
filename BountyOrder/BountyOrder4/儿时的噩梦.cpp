//
// Created by 何承洋 on 24-11-5.
//
#include <iostream>
using namespace std;
const int MOD = 1000000007;
int main() {
    int n, x;
    cin >> n >> x;
    long long result = 1;
    long long base = x;
    while (n > 0) {
        if (n % 2 != 0) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        n /= 2;
    }
    cout << result << endl;
    return 0;
}
