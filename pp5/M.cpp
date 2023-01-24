#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string charli(string s, char x, int n) {
    int i = 0;
    for (auto c: s) {
        if (c == x) { ++i; }
    }

    if (i == n) { return "YES"; }
    else { return "NO"; }
    
}


int main() {
    string s;
    char x;
    int n;

    getline(cin, s);
    stringstream(s) >> s >> x >> n;

    cout << charli(s, x, n);
    return 0;
}