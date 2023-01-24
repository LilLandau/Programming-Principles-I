#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <string> ingredients;
    for (int i = 0; i < n; i++)
    {
        string ingredient;
        cin >> ingredient;
        ingredients.push_back(ingredient);
    }
    
    map <string, set<string>> matches;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string key, value;
        cin >> key >> value;
        matches[key].insert(value);
        matches[value].insert(key);
    }
    
    string s;
    cin >> s;
    
    int numberOfMatches = matches[s].size();
    cout << numberOfMatches << endl;

    set <string>::iterator it;
    for (it = matches[s].begin(); it != matches[s].end(); ++it)
    {
        cout << *it << " ";
    }
    
    
    return 0;
}