//
// Created by 何承洋 on 24-10-28.
//
#include <iostream>
#include <algorithm>
using namespace std;
struct milk{
  int price;
  int sum;
};
milk M[5001];
bool cmp(const milk &a,const milk &b) {
  if(a.price == b.price){
     return a.sum > b.sum;
  }
  return a.price < b.price;
}
int main(){




  return 0;
}
