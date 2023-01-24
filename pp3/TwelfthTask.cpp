#include <iostream>
#include <algorithm>
using namespace std;

int RemoveDuplicates(int arr[], int n)
{
    if (n==0 || n==1) { return n; }

    int j = 0;
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
    return j;
}

int main() {
    int ArrSize;
    cin >> ArrSize;

    int arr[ArrSize];
    for (int i = 0; i < ArrSize; i++) { cin >> arr[i]; }
    sort(arr, arr+ArrSize);
    
    ArrSize = RemoveDuplicates(arr, ArrSize);

    for (int i = 0; i < ArrSize; i++) { cout << arr[i] << ' '; }
    
    return 0;
}