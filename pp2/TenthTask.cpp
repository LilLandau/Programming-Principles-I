#include <bits/stdc++.h>

using namespace std;

int main() {
    int ArrSize;
    cin >> ArrSize;
    int arr[ArrSize];

    int num;
    for(int i = 0; i < ArrSize; ++i) {
        cin >> num;
        arr[i] = num;
    }

    int count = 0;
    for(int k = 0; k < ArrSize; ++k) {
        while (arr[k] != 0) {
            if (arr[k] % 10 == 0) {++count;}
            arr[k] = arr[k] / 10;
        }
    }
    cout << count;   
}