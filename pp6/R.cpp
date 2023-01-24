#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

char up(char c) {
    return toupper(c);
}

int main() {
    char c;
    cin >> c;

    cout << up(c);
    return 0;
}