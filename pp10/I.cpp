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

    vector <int> origVec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> origVec[i];
    }

    vector <int> reversedVec = origVec;
    reverse(reversedVec.begin(), reversedVec.end());

    for (int i = 0; i < origVec.size(); i++)
    {
        if (origVec[i] != reversedVec[i])
        {
            cout << "Instead of " << origVec[i] << " here was " << reversedVec[i] << endl;
        }
        else if (origVec[i] == reversedVec[i])
        {
            cout << "OK" << endl;
        }
    }
    
    return 0;
}