#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a) {
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0) { return false; }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector <int> primes;
    for (int i = 2; i < n; i++)
    {
        if(isPrime(i))
            primes.push_back(i);
    }
    
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = 0; j < primes.size(); j++)
        {
            if (primes[i] + primes[j] == n)
            {
                cout << primes[i] << " " << primes[j];
                return 0;
            }
        }
    }
    
    return 0;
}