#include <bits/stdc++.h>

using namespace std;
long long n;
int main() {
    cin >> n;
    string t = ".", z = "*";
    string a[n][2 * n - 1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n - 1; j++){
            a[i][j] = z;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            a[i][j] = t;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = n + i; j < 2 * n - 1; j++){
            a[i][j] = t;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n - 1; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}