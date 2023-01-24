#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for (auto num: v)
    {   
        string bin;
        while(num)
        {
            bin += (num % 2) + 48;
            num /= 2;
        }
        reverse(bin.begin(), bin.end());
        cout << bin << endl;
    }
    return 0;
}