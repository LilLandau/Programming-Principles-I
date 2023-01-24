#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int l, r;
    cin >> l >> r;
    int len = (l+r)/2;
    
    int cnt = 0;
    for (int i = l; i <= len; i++)
    {
        int buff = v[i];
        v[i] = v[r-cnt];
        v[r-cnt] = buff;
        ++cnt;
    }
    
    
    for (int i = 0; i < n; i++) { cout << v[i] << " "; }
    return 0;
}