#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int numpow;
    cin >> numpow;

    for (int i = 0; i <= numpow; i++)
    {
        cout << setprecision(0) << fixed << pow(2, i) << endl;
    }
    return 0;
}