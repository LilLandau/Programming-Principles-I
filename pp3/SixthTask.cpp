#include <iostream>
using namespace std;

int main() {
    int ArraySize;
    cin >> ArraySize;

    int arr[ArraySize];
    for (int i = 0; i < ArraySize; ++i) {
        cin >> arr[i];
    }
    
    long long sum = 0;
    for (int k = 0; k < ArraySize; ++k) {
        sum = sum + arr[k];
    }

    cout << sum;
    return 0;
}