#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int sumOfDig(string n, int size) {
    if (size == 1) { return (int)n[0]-48; }
    else 
    {
        return ((int)n[size-1]-48) + sumOfDig(n, --size);
    }
}

int main() {
    string n;
    cin >> n;
    int size = n.size();

    cout << sumOfDig(n, size);
    return 0;
}