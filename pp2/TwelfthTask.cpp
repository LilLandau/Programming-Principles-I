#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int power = 0;
    int NumTwo = 0;
    
    while (NumTwo < N) {
        NumTwo = 2;
        NumTwo = pow(NumTwo, power);
        if (NumTwo <= N) {cout << NumTwo << " ";}
        ++power;
    }
    return 0;
}