#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

string isFound(int n, int arr[], int x) {
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x) { return "Yes"; }
    }
    return "No";
}

int main() {
    int n;
    cin >> n;
    
    int library[n];
    for (int i = 0; i < n; i++) { cin >> library[i]; }
    
    int x;
    cin >> x;

    cout << isFound(n, library, x);
    return 0;
}