#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    float n, m, b;
    cin >> n >> m >> b;

    if (b > 0.1*(n+m))
    {
        cout << "Boris, you are punished!";
    }
    else
    {
        cout << "You are my sweet baby";
    }
    

    return 0;
}