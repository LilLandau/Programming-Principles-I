#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector <int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    
    int m;
    cin >> m;

    vector <int> v2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    
    set <int> sums;
    for (int i = 0; i < v1.size(); i++)
    {
        if (i != 0)
        {
            for (int j = i-1; j >= 0; j--)
            {
                int sum = v1[i] + v1[j];
                sums.insert(sum);
            }
        }

        if (i != v1.size()-1)
        {
            for (int j = i+1; j < v1.size(); j++)
            {
                int sum = v1[i] + v1[j];
                sums.insert(sum);
            }
        }
    }
    

    for (int i = 0; i < v2.size(); i++)
    {
        if (sums.find(v2[i]) != sums.end()) { cout << "YES" << endl; }
        else { cout << "NO" << endl; }
    }
}