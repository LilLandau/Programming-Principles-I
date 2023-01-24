#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++){
        if ((s[i] >= '1' and s[i] <= '9') or (s[i] >= 'A' and s[i] <= 'Z')){
            continue;
        }
        else{
            cout << s[i];
        }
    }
}