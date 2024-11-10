//
// Created by 何承洋 on 24-10-27.
//
#include <iostream>
using namespace std;
void Output(string str,int start,int end) {
    for(int i=start;i<=end;i++) {
        cout<<str[i];
    }cout<<" ";
}
int main() {
    string str;
    getline(cin, str);
    int end=str.length()-1;
    for(int i=str.length()-1;i>=0;i--) {
        if(str[i] == ' ') {
            Output(str,i+1,end);
            end=i-1;
        }
    }
    Output(str,0,end);
    return 0;
}