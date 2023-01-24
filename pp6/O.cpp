#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

string luckyTicket(int ticket) {
    int sumOfDig = 0;
    int lastNum = ticket % 10;
    do
    {
        sumOfDig += ticket % 10;
        ticket /= 10;
    } while (ticket > 0);
    
    if (sumOfDig % lastNum == 0) { return "Yes";}
    else { return "No"; }
}

int main() {
    int ticket;
    cin >> ticket;

    cout << luckyTicket(ticket);
    return 0;
}