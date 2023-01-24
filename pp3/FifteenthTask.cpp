#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    int n;
    cin >> n;
    long long a[n + 10];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        cout << a[i] * a[i] << ' ';
    
    return 0;
}