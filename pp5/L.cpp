#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string alphabet(string s) {
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i] > s[i+1]) { return "NO"; }
    }

    return "YES";
}


int main() {
    string s;
    getline(cin, s);
    
    cout << alphabet(s);
    return 0;
}