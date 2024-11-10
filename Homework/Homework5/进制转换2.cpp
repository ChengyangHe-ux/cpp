//
// Created by 何承洋 on 24-10-26.
//
#include <iostream>
using namespace std;
int main() {
    string n;
    cin >> n;
    int sum = 0;
    int length = n.length();
        for (int i = 0; i < length; i++) {
        sum = sum * 2 + (n[i] - '0');
    }
    cout << sum << endl;
    return 0;
}
