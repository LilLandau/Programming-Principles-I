#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

void transMatrix() {
    int cols, rows;
    cin >> cols >> rows;
    int arr[cols][rows];

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    
}

int main() {
    transMatrix();
    return 0;
}