#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, a0, a1, a2, a3;
    cin >> a;
    
    if (a >= 8) { a3 = 1; a = a - 8; } else {a3 = 0; }
    if (a >= 4) { a2 = 1; a = a - 4; } else {a2 = 0; }
    if (a >= 2) { a1 = 1; a = a - 2; } else {a1 = 0; }
    if (a >= 1) { a0 = 1; a = a - 1; } else {a0 = 0; }
    
    cout << a0*8 + a1*4 + a2*2 + a3*1 << endl;
    
    return 0;
}