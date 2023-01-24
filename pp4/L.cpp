#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
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
    
    int min = 1e9;
    int sum = 0;

    cout << "coordinates of min elements: " << endl;
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < cols; i++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }

        for (int i = 0; i < cols; i++)
        {
            if (arr[i][j] == min)
            {
                cout << i+1 << ";" << j+1 << endl;
                break;
            }
        }
        
        sum += min;
        min = 1e9;
    }
    
    cout << endl << "Their sum:" << endl << sum;
    return 0;
}