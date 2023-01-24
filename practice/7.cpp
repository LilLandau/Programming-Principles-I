#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int x, d, count = 0;
    cin >> x >> d;

    do
    {
        if (x%10 == d)
        {
            ++count;
        }
        x = x/10;
    } while (x > 0);
    
    cout << count;

    return 0;
}