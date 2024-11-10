//
// Created by 何承洋 on 24-11-9.
//
#include <iostream>
#include <fstream>
using namespace std;
struct Seqlist {
    int a[100],n;
};
void Open(char fame[],Seqlist &l) {
    ifstream fin(fame);
    fin>>l.n;
    for(int i=0;i<l.n;i++) {
        fin>>l.a[i];
    }
}
void Output(Seqlist &l) {



}
int main() {









    return 0;
}