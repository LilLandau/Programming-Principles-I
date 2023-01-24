#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int maxDig(string num, int size, int i) {
   if (size-1 == i) 
   { 
        return ((int)num[size-1]-48); 
    }
   else
   {
    return max(((int)num[i]-48), maxDig(num, size, i+1));
   }
}

int main() {
    string num;
    cin >> num;
    int size = num.size();
    int i = 0;

    cout << maxDig(num, size, i);
    return 0;
}