#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string same(string s1, string s2) {
    if (s1 == s2) { return "YES"; }

    reverse(s1.begin(), s1.end());
    if (s1 == s2) { return  "YES"; }

    reverse(s1.begin(), s1.end());
    int sums1 = 0;
    int sums2 = 0;

    for (int i = 0; i < s1.size(); i++) { sums1 += (int)s1[i]; }
    for (int i = 0; i < s2.size(); i++) { sums2 += (int)s2[i]; }

    if (sums1 != sums2) { return "NO"; }
    else { return "YES"; }
}

int main() {
    string s1, s2;
    getline(cin, s1);
    stringstream(s1) >> s1 >> s2;

    cout << same(s1, s2);
    return 0;
}