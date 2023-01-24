#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n, max=0, col, row;
	cin>>n;

	int arr[n][n];
	for(int i=0; i < n; i++)
    {
		for(int j=0; j < n; j++)
        {
			cin >> arr[i][j];
		}
	}
	for(int i=0; i < n; i++)
    {
		for(int j=0; j < n;j++)
        {
			if (arr[i][j] > max)
            {
				max = arr[i][j];
				col = i+1;
				row = j+1;							
			}
			if (arr[i][j] = max) continue;
		}
	}
	cout << col << " " << row;
	return 0;
}