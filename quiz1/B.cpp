#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i <= 2; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+3);

    for (int i = 2; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    
}