#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    int sum = 0;
    int j = size-1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i][j];
        --j;
    }
    
    cout << sum;
    return 0;
}