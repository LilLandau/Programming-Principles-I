#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    vector <vector <int>> matrix;

    for (int i = 0; i < n; i++)
    {
        vector <int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }

        matrix.push_back(temp);
    }
    
    int count = 0;
    int max = 0;
    int equality = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > 0) { ++count; }
        }
        
        if (count > max)
        {
            max = i + 1;
            ++equality;
        }
    }

    if (equality == n)
    {
        cout << "Numbers are equal";
        return 0;
    }
    
    cout << max;
    return 0;
}