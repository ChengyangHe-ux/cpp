//
// Created by 何承洋 on 24-10-27.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=1;
    for (int i = 1; i <=n; i++) count*=i;
    int sum=0;
    while (count!=0) {
        count=count/10;
        sum++;
    }
    cout<<sum;
    return 0;
}