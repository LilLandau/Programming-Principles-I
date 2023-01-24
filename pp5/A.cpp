#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int sl = 0;
    int cl = 0;
    getline(cin, s);
    for (auto c: s)
    {
        if (c >= 'a' && c <= 'z') { ++sl; }
        if (c >= 'A' && c <= 'Z') { ++cl; }
    }

    cout << sl << " " << cl;
    return 0;
}