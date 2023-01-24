#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <set>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n == -1 || n == 0 || n == 1) { return false;}
    n = abs(n);

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) { return false; }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    vector <int> vec(n);
    for (int i = 0; i < n; i++) { cin >> vec[i]; }
    int primes = count_if(vec.begin(), vec.end(), isPrime);

    cout << primes;
    return 0;
}   