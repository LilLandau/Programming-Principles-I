#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str.find("@gmail.com") != string::npos)
        cout << str.substr(0,str.size() - 10) << endl;
    }
}