#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> myVec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> myVec[i];
    }

    set <int> mySet;
    for (int i = 0; i < n; i++)
    {
        if (myVec[i] % 2 != 0) { mySet.insert(myVec[i]); }
    }
    
    for (auto now: mySet) { cout << now << " "; }
    return 0;
}