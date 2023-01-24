#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int num;
    int numlen = 0;
    cin >> num;
    
    int num2 = num;
    while (num2)
    {
        num2 /= 10;
        ++numlen;
    }
    
    
    int arr[numlen];
    int i = 0;
    while(i < numlen) 
    {
        arr[i] = num%10;
        num /= 10;
        ++i;
    }

    int prod = 1;
    int sum = 0;
    for (int i = 0; i < numlen; i++)
    {
        prod = prod * arr[i];
        sum += arr[i];
    }
    
    int gp = sum + prod;
    cout << gp;

    return 0;
}