#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int SumOfNum, a;

    while (cin >> a)
    {
        SumOfNum += a;
    }
    
    cout << SumOfNum;
    return 0;
}