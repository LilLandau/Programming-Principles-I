#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string star = "*";
    string space = " ";
    if (n == 1)
    {
        cout << space << star << space << endl;
        cout << star << space << star;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4*n - 1; j++)
        {
            if (i == n - 1 && i + j >= (2*n)-1 && j - i <= (2*n) - 1)
            {
                cout << star;
            }
            else if (i + j == (2*n)-1 || j - i == (2*n)-1)
            {
                cout << star;
            }
            else
            {
                cout << space;
            }
        }
        cout << endl;
    }
    
    for (int i = n; i < 2*n; i++)
    {
        for (int j = 0; j < (4*n) - 1; j++)
        {   
            if (i == (2*n)-1)
            {
                if (j == (2*n)-1)
                {
                    cout << space;
                }
                else
                {
                    cout << star;
                }
            }
            else if (i - j == 1 || j - i == (2*n)-1 || j + i == (2*n)-1 || j+i == (4*n)-1)
            {
                cout << star;
            }
            else
            {
                cout << space;
            }
        }
        cout << endl;
    }
    
    return 0;
}