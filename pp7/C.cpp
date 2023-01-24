#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

string findX(int arr[], int n, int x) {
    if (n < 0) { return "No"; }
    
    if (arr[n] == x) { return "Yes"; }
    else { return findX(arr, n-1, x); }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) { cin >> arr[i]; }

    int x;
    cin >> x;
    
    cout << findX(arr, n, x);
    return 0;
}