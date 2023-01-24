#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    set <int> s;
    vector <int> v;
    int setSize;
    int temp;
    
    for (int i = 0; i < n; i++)
    {   
        cin >> temp;
        setSize = s.size();
        s.insert(temp);
        if (setSize != s.size())
        {
            v.push_back(temp);
        }
    }
    
    do
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}