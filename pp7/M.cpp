#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

void natural(int n) {
    if (n) { natural(n-1); }
    else { return; }

    cout << n << " ";
}

int main() {
    int n;
    cin >> n;

    natural(n);
    return 0;
}