#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    int max = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == max)
            ++count;
    }

    cout << count;
    return 0;
}