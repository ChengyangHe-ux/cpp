//
// Created by 何承洋 on 24-10-13.
//
#include <iostream>
#include <cstring>
using namespace std;

int MAX_LEN = 100000;
int Mul(int num[], int len, int x, int result[]) {
    int carry = 0;
    for (int i = 0; i < len; i++) {
        long long prod = 1LL * num[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }
    int new_len = len;
    while (carry > 0) {
        result[new_len++] = carry % 10;
        carry /= 10;
    }
    return new_len;
}
int Power(int x, int n, int result[]) {
    result[0] = 1;
    int len = 1;
    for (int i = 0; i < n; i++) {
        len = Mul(result, len, x, result);
    }
    return len;
}
int Add(int num1[], int len1, int num2[], int len2, int result[]) {
    int carry = 0;
    int len = 0;
    for (int i = 0; i < max(len1, len2); i++) {
        int sum = carry;
        if (i < len1) sum += num1[i];
        if (i < len2) sum += num2[i];
        result[len++] = sum % 10;
        carry = sum / 10;
    }
    if (carry > 0) {
        result[len++] = carry;
    }
    return len;
}
void PrintResult(int result[], int len) {
    for (int i = len - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}
int main() {
    int x1, n1, x2, n2;
    cin >> x1 >> n1 >> x2 >> n2;
    int result1[MAX_LEN] = {0};
    int result2[MAX_LEN] = {0};
    int finalResult[MAX_LEN] = {0};
    int len1 = Power(x1, n1, result1);
    int len2 = Power(x2, n2, result2);
    int finalLen = Add(result1, len1, result2, len2, finalResult);
    PrintResult(finalResult, finalLen);
    return 0;
}
