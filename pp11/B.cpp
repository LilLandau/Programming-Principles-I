#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    bool flag = true;
    set <int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(s.find(x) != s.end()) { flag = false; }
        s.insert(x);
    }
    
    if (flag) { cout << "YES"; }
    else { cout << "NO"; }
    return 0;
}