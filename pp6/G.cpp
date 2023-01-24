#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

void noVowel(string s) {
    string vowels = "AaEeUuIiOo";

    for (char c: vowels) {
        s.erase(remove(s.begin(), s.end(), c), s.end());
    }
    cout << s;
}

int main() {
    string s;
    getline(cin, s);

    noVowel(s);
    return 0;
}