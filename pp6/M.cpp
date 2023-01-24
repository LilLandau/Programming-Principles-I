#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

void reverseArr(int arr[], int size) {
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) { cin >> arr[i]; }
    
    reverseArr(arr, size);
    return 0;
}