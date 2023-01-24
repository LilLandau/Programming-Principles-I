#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    str += ' ';
    char c;
    int n = 0;
    for(int i = 0; i < str.size(); i++){
        int cnt = 1;
        while(str[i] == str[i + 1]){
            i++;
            cnt++;
        }

        if(cnt > n){
            n = cnt;
            cnt = 0;
            c = str[i];
        }
    }

    cout << c << ' ' << n << '\n';
}