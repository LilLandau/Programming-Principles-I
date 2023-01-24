#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector <int> vec1(n);
    vector <int> vec2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> vec2[i];
    }
    
    vector <int>::iterator it1;
    vector <int>::iterator it2;

    it1 = unique(vec1.begin(), vec1.end());
    it2 = unique(vec2.begin(), vec2.end());

    vec1.resize(distance(vec1.begin(), it1));
    vec2.resize(distance(vec2.begin(), it2));

    vector <int> vec3;
    for (int i = 0; i < vec1.size(); i++)
    {
        vec3.push_back(vec1[i]);
        vec3.push_back(vec2[i]);
    }
    vector <int>::iterator it3;
    it3 = unique(vec3.begin(), vec3.end());
    vec3.resize(distance(vec3.begin(), it3));

    vector <int>::iterator finit;
    for (finit = vec3.begin(); finit != vec3.end(); ++finit)
    {
        cout << *finit << " ";
    }
    return 0;
}