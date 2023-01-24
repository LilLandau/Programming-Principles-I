#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) { s[i] = tolower(s[i]); }
    
    set <char> mySet;
    for (int i = 0; i < s.size(); i++) { mySet.insert(s[i]); }
    
    cout << mySet.size() << endl;
    for (auto letter: mySet) { cout << letter << " "; }
    return 0;
}