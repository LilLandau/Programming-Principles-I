#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector <int> digits;
    int operations = 0;

    while (n > 9)
    {
        while (n)
        {
            int lastDigit = n % 10;
            digits.push_back(lastDigit);
            n /= 10;
            ++operations;
        }

        for (int i = 0; i < digits.size(); i++)
        {
            n += digits[i];
        }
        
        digits.clear();
    }
    
    cout << n << " " << operations;
    return 0;
}