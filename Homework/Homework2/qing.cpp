#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct SeqList
{
    int a[10000],  n;  // 40004B
};

void Open(char fname[], SeqList &L) // 引用传递！！
{
    ifstream fin(fname);
    fin>>L.n;
    for(int i=0; i<L.n; i++)
        fin>>L.a[i];
}
void Output(SeqList &L)// 引用传递:效率
{
    for(int i=0; i<L.n; i++)
        cout<<L.a[i]<<" ";
    cout<<endl;
}

int main()
{    SeqList L;
    Open("1.txt", L);
    Output(L);
    return 0;
}