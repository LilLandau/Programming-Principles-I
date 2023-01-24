#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size][size];
    int firstRow = 0;
    int lastRow = size-1;
    int firstCol = 0;
    int lastCol = size-1;
    int num = 1;

    arr[(size/2)-1][(size/2)-1] = size*size;
    do
    {
        for (int i = firstCol; i <= lastCol; i++)
        {
            arr[firstRow][i] = num;
            ++num;
        }
        if (firstRow == lastRow)
        {
            break;
        }
        ++firstRow;
        
        for (int i = firstRow; i <= lastRow; i++)
        {
            arr[i][lastCol] = num;
            ++num;
        }
        if (firstCol == lastCol)
        {
            break;
        }
        --lastCol;
        
        for (int i = lastCol; i >= firstCol; i--)
        {
            arr[lastRow][i] = num;
            ++num;
        }
        if (lastRow == firstRow)
        {
            break;
        }
        --lastRow;
    

        for (int i = lastRow; i >= firstRow; i--)
        {
            arr[i][firstCol] = num;
            ++num;
        }
        if (lastCol == firstCol)
        {
            break;
        }
        ++firstCol;

    } while (true);
    


    /*на вывод*/
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