#include <bits/stdc++.h>

using namespace std;

int main() {
    int Len, NumEven, NumOdd;
    cin >> Len;
    using std:: endl;

    int arr[Len];
    int num = 0;

    for (int i = 0; i < Len; ++i) {
        cin >> num;
        arr[i] = num;
    }
    
    NumEven = 0;
    NumOdd = 0;
    int k = 0;
    while (k < Len) {
        if (arr[k] % 2 == 0) {
            ++NumEven;
        }
        else {
            ++NumOdd;
        }

        ++k;
    }

    cout << NumEven << ' ' <<  NumOdd;
}