//
// Created by 何承洋 on 24-11-5.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    float count = even_count * (even_count - 1) / 2 + odd_count * (odd_count - 1) / 2;
    float all = n * (n - 1) / 2;
    float m = count / all;
    cout << fixed << setprecision(4) << m << endl;
    return 0;
}
