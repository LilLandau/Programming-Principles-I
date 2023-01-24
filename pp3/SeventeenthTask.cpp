#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    long long n, a;
    cin >> n;
    a = sqrt(n);
    if(a * a == n)
        cout << "Yes";
    else
        cout << "No";
}