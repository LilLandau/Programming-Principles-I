#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    float n, a, d;
    cin >> n >> a >> d;

    for (int i = 0; i < n; i++)
    {
        cout << a + d*i << " ";
    }

    long long sum = ((2*a + d*(n-1))*0.5*n);
    cout << endl;
    cout << "sum: " << sum;
    
    return 0;
}