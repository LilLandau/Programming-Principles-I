#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int first, second;
        cin >> first >> second;
        int reversedFirst = 0, reversedSecond = 0;

        while(first)
        {
            reversedFirst = reversedFirst*10 + first%10;
            first /= 10;
        }

        while(second)
        {
            reversedSecond = reversedSecond*10 + second%10;
            second /= 10;
        }

        int sum = reversedSecond + reversedFirst;
        int reversedSum = 0;
        while (sum)
        {
            reversedSum = reversedSum*10 + sum%10;
            sum /= 10;
        }

        cout << reversedSum << endl;
    }
    
    return 0;
}