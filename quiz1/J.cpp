#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, costa, costb, costc, costs;
    cin >> a >> b >> c >> costa >> costb >> costc >> costs;

    if (costs >= ((a*costa)+(b*costb)+(c*costc)))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}