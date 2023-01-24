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
    
    int k;
    cin >> k;
    v.erase(v.begin() + k);
    
    
    for (int i = 0; i < v.size(); i++) { cout << v[i] << " "; }
    return 0;
}