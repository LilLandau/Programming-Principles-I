#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
     int n, num, digit, rev = 0;
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);


     if (n == rev)
         cout << "YES";
     else
         cout << "NO";

    return 0;
}