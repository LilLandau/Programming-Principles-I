#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int NumOfCookies;
    cin >> NumOfCookies;

    int arr[NumOfCookies];
    for (int i = 0; i < NumOfCookies; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+NumOfCookies);

    int SumOfCookies = 0;
    for (int i = 0; i < NumOfCookies; i++)
    {
        SumOfCookies += arr[i];
    }

    cout << SumOfCookies << " " << arr[NumOfCookies-1];

    return 0;
}