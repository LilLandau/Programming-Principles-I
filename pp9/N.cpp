#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> v(n);

    for (int i = 0; i < n; i++) { cin >> v[i]; }
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int m = v[i]^v[j];

            for (int k = 0; k < n; k++)
            {
                if (v[k] == m)
                {
                    ++count;
                    break;
                }
            }
        }
    }
    
    cout << count;
    return 0;
}