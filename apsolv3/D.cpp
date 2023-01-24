#include <bits/stdc++.h>

using namespace std;

char ch(int a){
    if (a >= 10)
    {
        return 'A' + a - 10;
    }
    return a + '0';
}

void v(int n, int k){
    if (n == 0)
        return;
    v(n / k, k);
    cout << ch(n % k);
}

int main(){
    int n, k = 16;
    cin >> n;
    v(n, k);
}