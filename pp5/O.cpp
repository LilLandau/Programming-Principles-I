#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

char further(string s) {
    char far;
    for (auto c: s) 
    {
        if (far < c) { far = c; }
    }

    return far;
}

int main() {
    string s;
    getline(cin, s);

    cout << further(s);
    return 0;
}