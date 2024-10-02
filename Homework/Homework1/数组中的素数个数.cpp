//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
int is_prime(int n){
    if (n<=1)return 0;
    for(int i=2;i<n;i++) {
    if(n%i==0) return 0;
}
    return 1;
}
int PrimeCount(int arr[],int size) {
    int count = 0;
    for (int i = 0; i <size; i++) {
        if(is_prime(arr[i])) {count++;
        }

    }return count;
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++) {cin>>a[i];}
    for(int i=0;i<n2;i++) {cin>>b[i];}
    cout<<PrimeCount(a,n1)<<" "<<PrimeCount(b,n2)<<endl;
    return 0;
}