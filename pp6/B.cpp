#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void fillArr(int a[], int b[], int d[], int n) {
    for (int i = 0; i < n; i++) { d[i] = abs(a[i]-b[i]); }
}


int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++) { cin >> a[i]; }
    for (int i = 0; i < n; i++) { cin >> b[i]; }
    int d[n];

    fillArr(a, b, d, n);
    for (int i = 0; i < n; i++) { cout << d[i] << " "; }
    
    return 0;
}