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
    
    int sum = 0;
    int k;
    cin >> k;

    for (int i = n-1; i > n-k-1; --i) { sum += myVec[i]; }
    
    cout << sum;
    return 0;
}