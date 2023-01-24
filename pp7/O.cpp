#include <iostream>
using namespace std;

string s;
char c;
int p;
int kinary(int n, int k)
{
    if (n == 0)
    {
        for (int i = s.size() - 1; i >= 0; i--)
        {
            cout << s[i];
        }
        return 0;
    }
    p = n % k;
    if (p < 10)
    {
        c = char(p + 48);
    }
    else
    {
        c = char(p + 55);
    }
    s += c;
    kinary(n / k, k);
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    kinary(n, k);
}