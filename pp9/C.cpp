#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    map <int, int> m;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        ++m[num];
    }

    int count = 0;
    map <int, int>:: iterator it = m.begin();
    while (it != m.end())
    {
        if(it->second >= 2) { ++count; }
        ++it;
    }
    
    cout << count;
    return 0;
}