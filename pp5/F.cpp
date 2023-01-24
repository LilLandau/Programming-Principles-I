#include <iostream>
using namespace std;

int main() {
    string s;
    int l, r;
    cin >> s >> l >> r;
    
    for (int i = l; i < r+1; i++)
    {
        cout << s[i];
    }
}