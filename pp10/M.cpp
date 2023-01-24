#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector <int> v1(n);
    vector <int> v2(m);

    for (int i = 0; i < v1.size(); i++) { cin >> v1[i]; }
    for (int i = 0; i < v2.size(); i++) { cin >> v2[i]; }

    vector <int>::iterator it1;
    vector <int>::iterator it2;

    it1 = unique(v1.begin(), v1.end());
    it2 = unique(v2.begin(), v2.end());

    v1.resize(distance(v1.begin(), it1));
    v2.resize(distance(v2.begin(), it2));

    vector <int> v3;
    for (int i = 0; i < v1.size(); i++)
    {
        v3.push_back(v1[i]);
        v3.push_back(v2[i]);
    }
    
    
    vector <int>::iterator it3;
    it3 = unique(v3.begin(), v3.end());
    v3.resize(distance(v3.begin(), it3)); 

    if (v3[v3.size()-1] == 0)
    {
        v3.erase(v3.begin() + v3.size()-1);
    }

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    
    return 0;
}