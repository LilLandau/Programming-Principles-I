#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (((a == b) && (b != c)) || ((a == c) && (a != b)) || ((b == c) && (c != a)))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}