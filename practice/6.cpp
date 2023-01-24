#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (sqrt(i*1.0) == sqrt(i))
        {
            cout << i << " ";
        }
    }
    

    return 0;
}