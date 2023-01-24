#include <bits/stdc++.h>
using namespace std;



int main()
{
    string value, key;
    cin >> value >> key;

    while (value.size() > key.size())
    {
        key += key;
    }

    if (key.size() > value.size())
    {
        int diff = key.size() - value.size();
        key.erase(value.size(), diff);
    }

    transform(key.begin(), key.end(), key.begin(), ::toupper);
    transform(value.begin(), value.end(), value.begin(), ::toupper);

    string encrypted;
    for (int i = 0; i < value.size(); i++)
    {
        char x;
        x = ((value[i] + key[i]) % 26);

        x += 'A';

        encrypted.push_back(x);
    }
    
    transform(encrypted.begin(), encrypted.end(), encrypted.begin(), ::tolower);
    cout << encrypted;
    return 0;
}