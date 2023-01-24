#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string isEq(string s1, string s2) {
    if (s1.size() != s2.size()) { return "NO"; }
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i] != s2[i]) { return "NO"; }
        }
        return "YES";
    }

}

int main() {
    string s1, s2;
    getline(cin, s1);

    stringstream(s1) >> s1 >> s2;

    cout << isEq(s1, s2);
    return 0;
}