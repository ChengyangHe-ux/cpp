//
// Created by 何承洋 on 24-10-28.
//
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(long long num) {
    if (num < 2) return false;
    for (long long i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    long long n;
    cin >> n;

    long long a = -1, b = -1, c = -1, d = -1;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            long long j = n / i;
            if (a == -1) {
                a = i;
                b = j;
            }
            else {
                c = i;
                d = j;
                long long sum = a + b + c + d;
                if (isPrime(sum)) {
                    cout << sum << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
