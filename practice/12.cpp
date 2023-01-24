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
            arr[i][j] = 0;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (size-i-j == 1)
            {
                arr[i][j] = 1;
            }
            if (i+j >= size)
            {
                arr[i][j] = 2;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
