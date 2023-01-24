#include <iostream>
#include <map>
using namespace std;


int main() {
    string day;
    cin >> day;
    map <string, int> week;
    week["SUN"] = 7;
    week["MON"] = 6;
    week["TUE"] = 5;
    week["WED"] = 4;
    week["THU"] = 3;
    week["FRI"] = 2;
    week["SAT"] = 1;

    int val = week[day];
    cout << val;
    return 0;
}