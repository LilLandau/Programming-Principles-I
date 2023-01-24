#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

float percentGirls(float pupils, float girls) {
    return ((girls/pupils)*100);
}

int main() {
    float pupils, girls;
    cin >> pupils >> girls;

    cout << percentGirls(pupils, girls);
    return 0;
}