#include <iostream>
using namespace std;

int main() {
    int ArrSize, Left, Right;
    cin >> ArrSize >> Left >> Right;

    int arr[ArrSize];
    for (int i = 0; i < ArrSize; ++i) { cin >> arr[i]; }
    
    long long buff1;
    long long buff2;

    --Left;
    --Right;
    for (int i = Left; i <= Right;)
    {   
        buff1 = arr[i];
        buff2 = arr[Right];

        arr[Right] = buff1;
        arr[i] = buff2;

        ++i;
        --Right;

        if (Left == Right) { break; }
    }

    for (int i = 0; i < ArrSize; ++i) { cout << arr[i] << ' '; }
    
    return 0;
}