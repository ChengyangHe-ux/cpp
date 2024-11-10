//
// Created by 何承洋 on 24-10-21.
//
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    long long num;
    for (int i = 0; i < T; i++) {
        cin >> num;
        int pos = num % 8;
        if (pos == 1) cout << "D" << endl;
        else if (pos == 2 || pos == 0) cout << "S" << endl;
        else if (pos == 3 || pos == 7) cout << "Z" << endl;
        else if (pos == 4 || pos == 6) cout << "W" << endl;
        else if (pos == 5) cout << "X" << endl;
    }
    return 0;
}
