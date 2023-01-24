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
    
    int arrTrans[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arrTrans[i][j] = arr[j][i];
        }
    }
    
    int sumOfRow = 0;
    int thisCol = 0;
    for (int i = 0; i < cols; i++)
    {   
        sumOfRow = 0;

        for (int j = 0; j < rows; j++)
        {
            if (i == thisCol)
            {
                sumOfRow += arr[i][j];
            }
        }

        cout << "The sum of row number " << thisCol+1 << " is " << sumOfRow;
        cout << endl; 
        ++thisCol;
    }

    int sumOfCol = 0;
    int thisCol2 = 0;
    for (int i = 0; i < rows; i++)
    {   
        sumOfCol = 0;
        for (int j = 0; j < cols; j++)
        {
            if (i == thisCol2)
            {
                sumOfCol += arrTrans[i][j];
            }
        }
        
        cout << "The sum of column number " << thisCol2+1 << " is " << sumOfCol;
        cout << endl; 
        ++thisCol2;
    }
    return 0;
}