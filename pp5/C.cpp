#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string s1, s2;
    stringstream(s) >> s1 >> s2;
    
    if (s1.find(s2) != -1) { cout << "YES"; }
    else { cout << "NO"; }
    
    return 0;
}