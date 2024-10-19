//
// Created by 何承洋 on 24-9-30.
//
#include <iostream>
using namespace std;

// 输出数组，倒序输出
void Output(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i];
    cout << endl;
}

// 将字符串转化为数组
int stoa(string s, int a[]) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        a[n - 1 - i] = s[i] - '0';  // 倒序存储
    }
    return n;
}

// 高精度乘法，计算两个大数的乘积
int Mul(int x1[], int n1, int x2[], int n2, int x3[]) {
    // 初始化结果数组为 0
    for (int i = 0; i < n1 + n2; i++) {
        x3[i] = 0;
    }

    int jw = 0;  // 进位
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            int z = x3[i + j] + x1[i] * x2[j] + jw;
            jw = z / 10;  // 计算进位
            x3[i + j] = z % 10;  // 存储个位数
        }
        x3[i + n2] += jw;  // 处理剩余进位
        jw = 0;  // 清空进位
    }

    // 计算结果的有效长度，去掉前导0
    int n3 = n1 + n2;
    while (n3 > 1 && x3[n3 - 1] == 0) {
        n3--;
    }

    return n3;
}

// 高精度幂运算，计算 base^exp
int Pow(int base[], int base_len, int exp, int result[]) {
    // 初始值设为 1
    result[0] = 1;
    int result_len = 1;

    int temp[10000];  // 临时数组用于存储中间结果

    while (exp > 0) {
        if (exp % 2 == 1) {  // 如果 exp 是奇数
            result_len = Mul(result, result_len, base, base_len, temp);  // 乘以 base
            for (int i = 0; i < result_len; i++) {
                result[i] = temp[i];  // 更新 result 数组
            }
        }
        exp /= 2;
        base_len = Mul(base, base_len, base, base_len, temp);  // base 自乘
        for (int i = 0; i < base_len; i++) {
            base[i] = temp[i];  // 更新 base 数组
        }
    }

    return result_len;
}

int main() {
    string x1_str, x2_str;
    int n1, n2;
    int a[10000], b[10000], c[10000];
    int n1_len, n2_len, result_len;

    // 输入两个基数及其指数
    cin >> x1_str >> n1 >> x2_str >> n2;

    // 将 x1 和 x2 转换为数组
    n1_len = stoa(x1_str, a);
    n2_len = stoa(x2_str, b);

    // 计算 x1^n1 和 x2^n2
    int x1_pow[10000], x2_pow[10000];
    int x1_pow_len = Pow(a, n1_len, n1, x1_pow);
    int x2_pow_len = Pow(b, n2_len, n2, x2_pow);

    // 计算 (x1^n1) * (x2^n2)
    result_len = Mul(x1_pow, x1_pow_len, x2_pow, x2_pow_len, c);

    // 输出结果
    Output(c, result_len);

    return 0;
}


