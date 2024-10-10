//
// Created by 何承洋 on 24-10-7.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int note[n][2];
    for (int i = 0; i < n; i++) {
        cin >> note[i][0] >> note[i][1];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n-i-1; j++) {
            if(note[j][0]>note[j+1][0]){
                int temp = note[j][0];
                note[j][0] = note[j+1][0];
                note[j+1][0] = temp;
            }
        }
    }
    return 0;
}