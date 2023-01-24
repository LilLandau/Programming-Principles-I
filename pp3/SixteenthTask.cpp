#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    int ArrSize;
    cin >> ArrSize;
    int Arr[ArrSize];

    for (int i = 0; i < ArrSize; i++) { cin >> Arr[i]; }
    sort(Arr, Arr+ArrSize);

    for (int i = ArrSize-1; i >= 0; i--)
    {
        cout << Arr[i] << ' ';
    }
    
}