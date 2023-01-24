#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isPal(string s) {
    for (int i = 0; i*2 < s.size(); i++)
    {
        if (s[i] != s[s.size()-i-1])
        {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);

    if (isPal(s)) { cout << "YES"; }
    else {cout << "NO"; }
    return 0;
}