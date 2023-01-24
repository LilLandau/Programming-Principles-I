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

    int max = arr[0][0];
    int x = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i][i] > max)
        {
            max = arr[i][i];
            x = i;
        }
    }
    
    cout << "Maximum element is: " << max << " with coordinates: " << x+1 << ";" << x+1;
    return 0;
}