#include <iostream>
using namespace std;

int MAX_LEN = 1000;
void Div(int x, int y) {
    int remainder = x % y;
    int remainderPos[MAX_LEN] = {0};
    int result[MAX_LEN];
    int index = 0;
    bool hasCycle = false;
    int cycleStart = -1;
    while (remainder != 0 && index < MAX_LEN) {
        if (remainderPos[remainder] != 0) {
            hasCycle = true;
            cycleStart = remainderPos[remainder] - 1; 
            break;
        }
        remainderPos[remainder] = index + 1;
        remainder *= 10;
        result[index++] = remainder / y;
        remainder %= y;  
    }
    cout << "0.";
    for (int i = 0; i < index; i++) {
        if (i == cycleStart) {
            cout << "("; 
        }
        cout << result[i];
    }
    if (hasCycle) {
        cout << ")"; 
    }
    cout << endl;
}

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Div(x1, y1);
    Div(x2, y2);
    return 0;
}