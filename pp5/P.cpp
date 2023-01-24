#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string shift(string s) {
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'z') { s[i] = 'a'; }
        else {s[i] += 1; }
    }
    return s;
}

int main() {
    string s;
    getline(cin, s);

    cout << shift(s);
    return 0;
}