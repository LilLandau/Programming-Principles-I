#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int i = 1;
    int isqr = 1;
    
    while (isqr < N) {
        isqr = i;
        isqr = isqr*isqr;
        if (isqr <= N) {cout << isqr << std::endl;}
        ++i;
    }
    return 0;
}