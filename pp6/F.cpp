#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

string dop(string s, int num) {
    int snum = 0;
    for (auto c: s)
    {
        if (c >= '0' && c <= '9') 
        {
            ++snum;
        }
    }

    if (snum >= num) {
        return "YES";
    }
    else 
    {
        return "NO";
    }
}

int main() {
    string s;
    int num;
    cin >> s;
    cin >> num;

    cout << dop(s, num);
    return 0;
}