//
// Created by 何承洋 on 24-10-14.
//
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int count=0;
    int cnt=1;
    int i=2;
    while(x>1) {
        if(x%i==0) {
            x/=i;
            count++;
        }else {
            cnt=cnt*(count+1);
            i++;
            count=0;
        }

    }
    cnt=cnt*(count+1);
    cout<<cnt<<endl;
    return 0;
}



