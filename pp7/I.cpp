#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int sum = 0;
long long sumOfSeq() {
    int num;
    cin >> num;
    if (num == 0) { return sum; }
    
    sum += num;
    return sumOfSeq();
}


int main() {
    cout << sumOfSeq();
    return 0;
}