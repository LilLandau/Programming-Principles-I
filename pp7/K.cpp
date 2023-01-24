#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int maxDigit(string num, int size) {
    if (size == 0) 
    {
        return ((int)num[0]-48);
    }
    else
    {
        return max(((int)num[size]-48), maxDigit(num, --size));
    }
} 


int main() {
    string num;
    cin >> num;
    int size = num.size()-1;

    cout << maxDigit(num, size);
    return 0;
}