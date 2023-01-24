#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int sizeCol, sizeRow;
	cin >> sizeCol >> sizeRow;

	int arr[sizeCol][sizeRow];
	for (int i=0; i < sizeCol; i++)
    {
		for (int j=0; j < sizeRow; j++)
        {
			cin >> arr[i][j];
		}
	}

    for (int i=0; i < sizeCol; i++)
    {
		for (int j=0; j < sizeRow; j++)
        {
			if (sqrt(arr[i][j])*sqrt(arr[i][j]) == arr[i][j])
            {
                arr[i][j] = sqrt(arr[i][j]);
            }
		}
	}

    for (int i=0; i < sizeCol; i++)
    {
		for (int j=0; j < sizeRow; j++)
        {
			cout << arr[i][j] << " ";
		}
        cout << endl;
	}
	return 0;
}