#include <bits/stdc++.h>
using namespace std;

bool toEnd(vector<vector <char>> matrix)
{
    
}

int main() {
    vector <vector <char>> matrix;
    int x, y;
    cin >> y >> x;

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            char c;
            cin >> c;
            matrix[i].push_back(c);
        }
    }
    
    return 0;
}