#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int isPrime(int n, vector <int>& myVec, int k) {
    vector <int> bigger;
    for (auto v: myVec) 
    {
        if (v >= k) 
        { 
            bigger.push_back(v); 
        }
    }

    int count = bigger.size();

    for (int i = 0; i < bigger.size(); i++)
    {
        for (int j = 2; j <= sqrt(bigger[i]); j++)
        {
            if (bigger[i] % j == 0)
            {
                --count;
                break;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    vector <int> myVec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> myVec[i];
    }
    sort(myVec.begin(), myVec.end());
    int k;
    cin >> k;
    
    cout << isPrime(n, myVec, k);
    return 0;
}