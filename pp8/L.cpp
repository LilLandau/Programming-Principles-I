#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set <int> mySet;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        mySet.insert(temp);
    }
    
    cout << mySet.size();
    return 0;
}