//
// Created by 何承洋 on 24-10-27.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    string substr;
    getline(cin, str);
    cin >> substr;
    int k = 0;
    int count = 0;
    while (true) {
        k = str.find(substr, k);
        if (k == -1)
            break;
        count++;
        k += substr.length();
    }

    if (count == 0) {
        cout << "-1" << endl;
    } else {
        cout << count << endl;
    }

    return 0;
}

