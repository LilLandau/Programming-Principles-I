#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    map <string, int> m;

    for (int i = 0; i < n; i++)
    {
        string title;
        int time;
        cin >> title >> time;
        m[title] += time;
    }
    
    map <string, int>:: iterator it;
    for (it = m.begin(); it != m.end(); ++it) { cout << it->first << " " << it->second << endl;}
    return 0;
}