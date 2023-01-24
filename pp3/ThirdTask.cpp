#include <bits/stdc++.h>
using namespace std;

int main() {
    int ArraySize;
    cin >> ArraySize;
    using std:: endl;

    int arr[ArraySize];
    int num;
    for (int i = 0; i < ArraySize; ++i) {
        cin >> num;
        arr[i] = num;
    }

    int MaxInt = arr[0];
    for (int k = 0; k < ArraySize; ++k) {
        if (arr[k] > MaxInt){
            MaxInt = arr[k];
        }
    }

    cout << MaxInt;
    return 0;
}