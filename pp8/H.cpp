#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> myVec(n);
    for (int i = 0; i < n; i++) { cin >> myVec[i]; }
    sort(myVec.begin(), myVec.end());
    
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) { cout << myVec[i] << " ";}
    return 0;
}