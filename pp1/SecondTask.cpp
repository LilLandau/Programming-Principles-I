#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    
    cout << n + m%10 +  m/100;

    return 0;
}