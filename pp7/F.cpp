#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int countOfEven(string num, int size) {
    if (size < 0) { return 0; }

    if (num[size] == '2' || num[size] == '4' || num[size] == '6' || num[size] == '8' || num[size] == '0') 
    { 
        return (1 + countOfEven(num, --size)); 
    }
    else
    {
        return countOfEven(num, --size);
    }
}

int main() {
    string num;
    cin >> num;
    int size = num.size()-1;

    cout << countOfEven(num, size);
    return 0;
}