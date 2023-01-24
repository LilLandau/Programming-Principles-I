#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;

string brackets(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(') { ++count; }
        else if (s[i] == ')') { --count; }

        if (count < 0) { return "NO"; }
    }

    if (count != 0) { return "NO"; }
    else { return "YES"; }
}

int main() {
    string s;
    cin >> s;
    
    cout << brackets(s);
    return 0;
}