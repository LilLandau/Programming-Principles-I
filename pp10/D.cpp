
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumofDanial(vector<int> v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
int comp(vector<int> v1, vector<int> v2)
{
    return sumofDanial(v1) < sumofDanial(v2);
}
int main() {
    int n;
    cin >> n;

    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> tmp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}