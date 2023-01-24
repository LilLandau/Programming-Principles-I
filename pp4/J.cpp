#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int  main() {
    int col, row;
    cin >> col >> row;
    int arr[col][row];

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if ((i+j) % 2 == 0)
                arr[i][j] = arr[i][j] + 1;
            else
                arr[i][j] = arr[i][j] - 1;
        }
    }
    
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}