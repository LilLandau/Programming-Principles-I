#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;

    map <string, string> accounts;
    map <string, int> exist;
    for (int i = 0; i < n; i++)
    {
        string login, password;
        cin >> login >> password;
        accounts[login] = password;
        ++exist[login];
    }
    
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string loginTry, passwordTry;
        cin >> loginTry >> passwordTry;

        if (accounts[loginTry] == passwordTry && exist[loginTry] > 0) { cout << "correct password" << endl; }
        else if (accounts[loginTry] != passwordTry && exist[loginTry] > 0) { cout << "password error" << endl; }
        else { cout << "login error" << endl; }
    }
    
    return 0;
}