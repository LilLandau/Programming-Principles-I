#include <bits/stdc++.h>

using namespace std;

int main() {
    int Len, NumOfInt, i, num, MaxNum;
    Len = 0;

    cin >> Len;
    using std::endl;


    NumOfInt = Len;
    i = 0;
    int arr[Len];


    while (NumOfInt != 0) {
        cin >> num;
        arr[i] = num;

        ++i;
        --NumOfInt;
    }

    MaxNum = 0;
    for(int k = 0; k < Len; ++k) {
        if (arr[k] > MaxNum) {
            MaxNum = arr[k];
        }
    }

    cout << MaxNum;
}