#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n;

    do
    {
        d = n % 10;
        if (d != 0) {
            cout << d;
        }
        
        n = n/10;
        
    } while (n > 0);
    

    return 0;
}