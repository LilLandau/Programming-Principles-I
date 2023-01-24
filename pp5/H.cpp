#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string eqNum(string s) {
    if (s.size() % 2 == 1) { return "NO"; }

    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    
    for (int i = 0; i <= s.size(); ++i)
    {
        if (s[i] == '0') { ++zero; }
        if (s[i] == '1') { ++one; }
        if (s[i] == '2') { ++two; }
        if (s[i] == '3') { ++three; }
        if (s[i] == '4') { ++four; }
        if (s[i] == '5') { ++five; }
        if (s[i] == '6') { ++six; }
        if (s[i] == '7') { ++seven; }
        if (s[i] == '8') { ++eight; }
        if (s[i] == '9') { ++nine; }
    }
    
    if (one != two && one != 0 && two != 0) { return "NO"; }
    else if ( two != three && two != 0 && three != 0) { return "NO"; }
    else if ( three != four && three != 0 && four != 0) { return "NO"; }
    else if ( four != five && four != 0 && five != 0) { return "NO"; }
    else if ( five != six && five != 0 && six != 0) { return "NO"; }
    else if ( six != seven && six != 0 && seven != 0) { return "NO"; }
    else if ( seven != eight && seven != 0 && eight != 0) { return "NO"; }
    else if ( eight != nine && eight != 0 && nine != 0) { return "NO"; }
    else if (true) { return "YES"; }
}


int main() {
    string s;
    getline(cin, s);
    
    cout << eqNum(s);
    return 0;
}