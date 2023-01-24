#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> tel;
    for (int i = 0; i < n; i++)
    {
        string number;
        cin >> number;
        ++tel[number];
    }
    
    int count = 0;
    map <string, int>::iterator it = tel.begin();
    while (it != tel.end())
    {
        if (it->second == 3) { ++count; }
        ++it;
    }
    
    cout << count;
    return 0;
}