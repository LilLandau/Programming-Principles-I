#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, j;
    cin >> n;
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        if (j == 0)
        {
            ++count;
        }
    }
    
    if (count == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}