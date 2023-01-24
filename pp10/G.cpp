#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map <pair<pair <string, string>, pair<int, int>>, int> m;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        int i1, i2;
        cin >> s1 >> i1 >> s2 >> i2;
        m[make_pair(make_pair(s1, s2), make_pair(i1, i2))] = i1 + i2;
    }
    
    map <pair<pair <string, string>, pair<int, int>>, int>:: iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first.first.first << " and " << it->first.first.second << " " << it->second << endl;
    }
    
    return 0;
}