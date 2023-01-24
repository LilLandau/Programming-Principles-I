#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string str;
    char c;
    vector<int> v;
    cin >> str >> c;
    
    for (int i = 0; i < str.length(); i++){
        if (str[i] == c){
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    if (v.size() == 1){
        cout << v[0];
    }
    else{
        cout << v[0] << " " << v[v.size() - 1];
    }
}