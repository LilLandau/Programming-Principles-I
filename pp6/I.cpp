#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

string evenUp(string s, int size) {
    for (int i = 0; i < size; i += 2)
    {
        s[i] = toupper(s[i]);
    }
    
    return s;
}

int main() {
    string s;
    cin >> s;

    int size = s.size();
    cout << evenUp(s, size);
}