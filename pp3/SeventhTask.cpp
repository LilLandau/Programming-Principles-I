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
    
    int j = 0;
    int arrCopy[ArraySize];
    for (int k = ArraySize-1; k >=0;) {
        arrCopy[j++] = arr[k--];
    }

    for (int p = 0; p < ArraySize; ++p) {
        cout << arrCopy[p] << " ";
    }

    return 0;
}