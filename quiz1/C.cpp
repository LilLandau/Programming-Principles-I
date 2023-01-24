#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    int bleft = x-a;
    int sleft = y-b;

    if ((x+y-a-b >= 0) && (x >= a) && (bleft - abs(sleft >= 0))) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
    
}