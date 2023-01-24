#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector <vector <int>> matrix;
    if (n == 1) {
        int num;
        cin >> num;
        cout << "YES";
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {   
        vector <int> temp;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            temp.push_back(num);
        }
        matrix.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    
    cout << "YES";
    return 0;
}