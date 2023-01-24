#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n;
    cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < s.size(); j++){
            if(a[i] == s[j])
            cnt++;
        }
        cout << a[i] << " - " << cnt << endl;
        
    }
}