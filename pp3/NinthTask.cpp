#include <iostream>
using namespace std;

int main() {
    int ArrSize, Left, Right;
    cin >> ArrSize >> Left >> Right;

    int arr[ArrSize];
    for (int i = 0; i < ArrSize; i++)
    {
        cin >> arr[i];
    }

    long long SumNum = 0;
    if (Left == Right)
    {
        SumNum = arr[--Left];
    }
    else 
    {
        --Left;
        --Right;
        for (int i = 0; i < ArrSize; ++i)
        {
            if (i >= Left && i <= Right) {
                SumNum = SumNum + arr[i];
            }
        }  
    }
    
    cout << SumNum;
    return 0;
}  