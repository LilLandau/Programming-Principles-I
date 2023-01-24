#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string isPal(string s) {
    string s1 = s + s[0];

    for (int i = 0; i*2 < s.size(); i++)
    {
        if (s1[i] != s1[s1.size()-i-1])
        {
            return "NO";
        }
    }
    return "YES";
}


int main() {
    string s;
    getline(cin, s);

    cout << isPal(s); 
    return 0;
}