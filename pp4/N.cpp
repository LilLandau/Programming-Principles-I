#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int num;
    cin >> num;
    bool isPrime = true;

    for (int currNum = 2; currNum < num; currNum++)
    {
        for (int div = 2; div < currNum; div++)
        {
            if (currNum % div == 0)
            {
                isPrime = false;
                break;
                div = 2;
            }
        }
        if (isPrime)
        {
            cout << currNum << " is prime" << endl;
        }
        isPrime = true;
    }

    return 0;
}