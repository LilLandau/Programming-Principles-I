#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sqrtn = sqrt(n);
    
    if (pow(sqrtn, 2) == n)
    {
        cout << "Perfecto";
    }
    else {
        cout << "Simple";
    }
    
    return 0;
}