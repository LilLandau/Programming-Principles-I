#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

string isPalindrom(string s, int size, int i){
    if (size == 0) { return "Yes"; }
    else 
    {
        if (s[0+i] == s[size]) 
        {
            return isPalindrom(s, --size, ++i);
        }
        else 
        {
             return "No";
        }
    }
} 


int main() {
    int i = 0;
    string s;
    cin >> s;
    int size = s.size()-1;

    cout << isPalindrom(s, size, i);    
    return 0;
}