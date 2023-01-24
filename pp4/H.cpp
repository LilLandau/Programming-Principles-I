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

    int drop = 0;
    for (int i=0; i < 1; i++)
    {   
		for (int j=0; j < sizeRow; j++)
        {
			drop += arr[i][j];
		}
	}

    int sumOfSub = 0, subject = 1;
    for (int i=0; i < sizeCol; i++)
    {   
        sumOfSub = 0;
		for (int j=0; j < sizeRow; j++)
        {
			sumOfSub += arr[i][j];
		}
        if (sumOfSub < drop)
        {
            drop = sumOfSub;
            subject = i+1;
        }
	}

    cout << subject;
	return 0;
}