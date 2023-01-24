#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string copyPaste(string s, string t) {
    if (t.size() % s.size() != 0) { return "NO"; }
    int scale = t.size() / s.size();

    string result;
    for (int i = 0; i < scale; i++) { result += s; }
    if (result != t) { return "NO"; }
    else { return "YES"; }
    
}

int main() {
    string s, t;
    cin >> s >> t;

    cout << copyPaste(s, t);
    return 0;
}