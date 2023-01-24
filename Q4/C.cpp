#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    if (a == 0 || a == 1) { return false; }
    else if (a == 2) { return true; }

    for (int i = 2; i < sqrt(a); i++)
    {
        if (a % i == 0) { return false; }
    }

    return true;
}

int main() {
    int num;
    cin >> num;

    vector <int> v;
    for (int i = 1; i < 100; i++)
    {
        if (isPrime(i) == true)
        {
            v.push_back(i);
        }
    }
    
    vector <int> superPrimes;
    for (int i = 0; i < v.size(); i++)
    {
        if (isPrime(i+1) == true)
        {
            superPrimes.push_back(v[i]);
        }
    }
    
    cout << superPrimes[num-1] << endl;
    return 0;
}