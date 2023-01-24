#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int  main() {
    int n;
    cin >> n;
    string dot = ".";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n-i-1) 
                cout << n-j;
            else 
                cout << dot; 
        }
        cout << endl;
    }

    return 0;
}