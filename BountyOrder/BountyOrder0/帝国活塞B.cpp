//
// Created by 何承洋 on 24-10-6.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int S1,S2,S3;
    for(int i=0;i<n;i++) {
        cin>>S1>>S2>>S3;
        if(S1==S2 ) return -1;
        if(S2==S3||S1==S3) continue;

    }



    return 0;
}