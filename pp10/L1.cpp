#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sizeV = 0;
    for (int i = 1; i <= n; i++) { sizeV += i; }
    vector <int> v(sizeV);
    
    int startPos = 0;
    int endPos = 0;
    for (int i = 1; i <= n; i++)
    {   
        endPos += i;
        fill(v.begin()+startPos, v.begin()+endPos, i);
        startPos = endPos;
    }
    
    for (int i = 0; i < v.size(); ++i) { cout << v[i] << " "; }
    return 0;
}