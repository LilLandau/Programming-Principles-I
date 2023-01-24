#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int vowel(string s) {
    int numOfVowel = 0;
    for (auto c: s) 
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { ++numOfVowel; }
    }

    return numOfVowel;
}


int main() {
    string s;
    getline(cin, s);
    
    cout << vowel(s);
    return 0;
}