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
    if (find(myVec.begin(), myVec.end(), k) != myVec.end()) { cout << "Yes"; }
    else { cout << "No"; }
    
    return 0;
}