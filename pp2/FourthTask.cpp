#include <bits/stdc++.h>

using namespace std;

int main() {
    float n, k, t;
    cin >> n >> k;
    
    if (n < k) {
        t = 2;
    }
    else {
        t = ceil(n*2/k);
    }

    cout << t;
}