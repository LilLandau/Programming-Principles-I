#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string k = " ";
    map<string, int> m;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == s.size() - 1)
        {
            k += s[i];
            m[k]++;
            break;
        }
        if (s[i] == ' ')
        {
            m[k]++;
            k = " ";
        }

        else
        {
            k += s[i];
        }
    }
    vector<pair<int, string>> v;
    map<string, int>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        v.push_back(make_pair(it->second, it->first));
    }
    sort(v.begin(), v.end());

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i].second << " : " << v[i].first << endl;
    }
}