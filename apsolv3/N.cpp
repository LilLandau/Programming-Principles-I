#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++){
        if ((str[i] >= 32 and str[i] <= 64) or (str[i] >= 91 and str[i] <= 96)){
            continue;
        }
        else{
            cout << str[i];
        }
    }
}