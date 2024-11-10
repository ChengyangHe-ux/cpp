//
// Created by 何承洋 on 24-10-29.
//
#include<iostream>
using namespace std;
struct score {
    int grade;
    string name;
};
int main() {
    int N;
    cin>>N;
    score s[N];
    for(int i=0;i<N;i++) {
        cin>>s[i].grade>>s[i].name;
    }
    int maxindex=0;
    for(int i=0;i<N;i++) {
        if(s[i].grade>s[maxindex].grade) {
            maxindex=i;
        }
    }
    cout<<s[maxindex].name;
    return 0;
}