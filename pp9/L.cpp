#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <pair<int, int>> v(n);
    
    for (int i = 0; i < n; i++)
    {
        int first, second;
        cin >> first >> second;
        v[i] = make_pair(first+second, i+1);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) { cout << v[i].second << " "; }
    return 0;
}