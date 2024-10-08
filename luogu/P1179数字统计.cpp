//
// Created by 何承洋 on 24-10-6.
//
#include <iostream>
using namespace std;
int main() {
    int L, R;
    cin >> L >> R;
    int count = 0;
    if (L <= R) {
        for (int i = L; i <= R; i++) {
            int ii = i;
            while (ii != 0) {
                if (ii % 10 == 2) count++;
                ii = ii / 10;
            }
        }
    }
    cout << count << endl;
    return 0;
}
