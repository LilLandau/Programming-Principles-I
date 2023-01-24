#include <bits/stdc++.h>

using namespace std;

int main(){

    string str, str1;
    char c;
    cin >> str >> str1 >> c;
    for (int i = 0; i < str1.size(); i++){
        for (int j = 0; j < str.size(); j++){
            if (str[j] == str1[i]){
                str[j] = c;
            }
        }
    }
    cout << str;
}