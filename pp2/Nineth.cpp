#include <bits/stdc++.h>

using namespace std;

int main() {
    int ArrSize;
    cin >> ArrSize;
    using std:: endl;

    int arr[ArrSize];
    int num = 0;

    for (int i = 0; i < ArrSize; ++i) {
        cin >> num;
        arr[i] = num;
    }
    
    int SevenInt = 0;
    int k = 0;
    while (k < ArrSize) {
        if (arr[k]% 10 == 7) {
            ++SevenInt;
        }
        ++k;
    }

    cout << SevenInt;
    return 0;
}