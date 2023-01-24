#include <bits/stdc++.h>
using namespace std;

int lenOfNum(int a)
{
    int len = 0;
    while(a)
    {
        a /= 10;
        ++len;
    }

    return len;
}

int main() 
{
    int l, r;
    cin >> l >> r;

    if (l == r)
    {
        cout << l;
        return 0;
    }

    int lenL = lenOfNum(l);
    set <int> s;
    
    for (int i = l; i <= r; i++)
    {
        int number = i;
        int dupNum = number;
        while (number)
        {
            int digit = number % 10;
            number /= 10;
            s.insert(digit);
        }

        if (s.size() >= lenL)
        {
            cout << dupNum;
            return 0;
        }
        s.clear();
    }
    
    cout << "Understandable, have a great day";
    return 0;
}