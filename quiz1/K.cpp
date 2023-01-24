#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int BusStop=1;
    while (n > 0)
    {   
        if (BusStop % 2 == 0)
        {
            n = n-4;
        }
        else if (BusStop % 2 !=0)
        {
            n = n+3;
        }
        
        if ((BusStop + 1) % 7 == 0)
        {
            BusStop = BusStop + 2;
        }
        else
        {
            ++BusStop;
        }  
    }
    
    cout << BusStop;
    return 0;
}