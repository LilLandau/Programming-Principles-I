#include <bits/stdc++.h>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    //високосный год последние дни
    if (month == 2 && year % 4 == 0 && year % 100 != 0)
    {
        if (day == 28)
        {
            ++day;
            cout << day << " " << month << " " << year;
            return 0;
        }
        if (day == 29) 
        {
            day = 1;
            ++month;
            cout << day << " " << month << " " << year;
            return 0;
        }
    }

    //30 и 31 дни
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day == 30)
        {
            ++day;
            cout << day << " " << month << " " << year;
            return 0;
        }
        if (day == 31)
        {
            if (month == 12)
            {   
                day = 1;
                month = 1;
                ++year;
                cout << day << " " << month << " " << year;
                return 0;
            }
            else
            {
                day = 1;
                ++month;
                cout << day << " " << month << " " << year;
                return 0;
            }
        }
    }

    //29 и 30 дни
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day == 29)
        {
            ++day;
            cout << day << " " << month << " " << year;
            return 0;
        }
        if (day == 30)
        {
            day = 1;
            ++month;
            cout << day << " " << month << " " << year;
            return 0;
        }
    }

    if (day >= 1 && day <= 27)
    {
        ++day;
        cout << day << " " << month << " " << year;
        return 0;
    }
    return 0;
}