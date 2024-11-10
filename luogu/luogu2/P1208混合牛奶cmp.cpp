//
// Created by 何承洋 on 24-10-29.
//
#include <iostream>
#include <algorithm>
using namespace std;
#define min(a,b) (((a) < (b)) ? (a) : (b))
struct milk {
    int price;
    int sum;
};
milk M[5001];
bool cmp(const milk &a, const milk &b) {
    if (a.price == b.price) {
        return a.sum > b.sum;
    }
    return a.price < b.price;
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> M[i].price >> M[i].sum;
    }
    sort(M, M + m, cmp);
    int money = 0;
    for (int i = 0; i < m; i++) {
        int sumi = min(n, M[i].sum);
        n -= sumi;
        money += sumi * M[i].price;
        if (n == 0) {
            break;
        }
    }
    cout << money << endl;
    return 0;
}
