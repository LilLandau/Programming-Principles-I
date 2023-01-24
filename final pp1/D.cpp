#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector <int> numbers;

    string numberString;
    for (auto c: s)
    {   
        if (c == '-') { continue; }

        if (c != '.') { numberString += c; }
        else
        {
            numbers.push_back(stoi(numberString));
            numberString.clear();
        }
    }
    
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > 255)
        {
            cout << 0;
            return 0;
        }
    }
    
    cout << 1;
    return 0;
}