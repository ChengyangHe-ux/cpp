//
// Created by 何承洋 on 24-10-14.
//
#include <iostream>
#include <cmath>
#include <set>
using namespace std;
int main() {
    long long N;
    cin >> N;
    set<long long> used_factors;
    int operations = 0;
    while (N > 1) {
        bool found = false;
        for (long long p = 2; p * p <= N; p++) {
            if (N % p == 0) {
                long long z = p;
                while (N % z == 0 && used_factors.find(z) == used_factors.end()) {
                    used_factors.insert(z);
                    N /= z;
                    operations++;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (!found) {
            if (N > 1 && used_factors.find(N) == used_factors.end()) {
                operations++;
            }
            break;
        }
    }
    cout << operations << endl;
    return 0;
}



