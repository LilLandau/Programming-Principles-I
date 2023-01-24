#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int salary;
    cin >> salary;
    int BankAccount = 0.3*salary;

    int month = 1;

    while (BankAccount < 500000)
    {
        ++month;
        salary = salary + 0.1*salary;
        BankAccount = BankAccount + 0.3*salary;
    }
    
    cout << month;
    return 0;
}