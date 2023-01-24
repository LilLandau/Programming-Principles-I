#include <iostream>
using namespace std;

int main() {
    int ArrSize;
    cin >> ArrSize;

    int arr[ArrSize];
    int num;
    for (int i = 0; i < ArrSize; ++i) {
        cin >> num;
        arr[i] = num;
    }

    int MaxValue = arr[0];
    int MaxValueInd = 0;
    for (int i = 0; i < ArrSize; i++)
    {
        if (arr[i] > MaxValue) {
            MaxValue = arr[i];
            MaxValueInd = i;
        }
    }

    int MinValue = arr[0];
    int MinValueInd = 0;
    for (int i = 0; i < ArrSize; i++)
    {
        if (arr[i] < MinValue) {
            MinValue = arr[i];
            MinValueInd = i;
        }
    }

    arr[MaxValueInd] = arr[MinValueInd];
    for (int i = 0; i < ArrSize; i++)
    {
        cout << arr[i] << ' ';
    }
    
    return 0;
}    