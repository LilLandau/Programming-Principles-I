#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <set>
#include <cmath>
using namespace std;



int main()
{
    int n;
    cin >> n;

    int size = 0;
    for (int i = 1; i <= size; i++) { size += i; }
    vector <int> v(size);
    
    int startPos = 0;
    int endPos = 0;
    for (int i = 1; i <= n; i++)
    {   
        endPos += i;
        fill(v.begin()+startPos, v.begin()+endPos, i);
        startPos = endPos;
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}   