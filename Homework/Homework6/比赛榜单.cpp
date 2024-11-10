//
// Created by 何承洋 on 24-11-1.
//
#include <iostream>
using namespace std;
struct student {
    int number;
    int grade;
};
int main() {
    student data[100000];
    int n,k;
    cin>>n>>k;
    for (int i=0;i<n;i++) {
        cin>>data[i].number>>data[i].grade;
    }
    for(int i=0;i<n-1;i++) {
        for(int j=n-1;j>i;j--) {
            if(data[j].grade>data[j-1].grade) {
                swap(data[j].grade,data[j-1].grade);
                swap(data[j].number,data[j-1].number);
            }
        }
    }
    for(int i=0;i<n-1;i++) {
        if(data[i].grade==data[i+1].grade) {
            if(data[i].number>data[i+1].number)
            {swap(data[i].grade,data[i+1].grade);
                swap(data[i].number,data[i+1].number);
            }
        }
    }
    cout<<data[k-1].number<<" "<<data[k-1].grade;
    return 0;
}