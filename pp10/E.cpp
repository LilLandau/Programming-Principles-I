#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    int days;
    cin >> days;

    map<string, double> m;
    double total = 0;

    for (int i = 0; i < days; i++)
    {
        int cities;
        cin >> cities;

        for (int j = 0; j < cities; j++)
        {
            string city;
            double students;
            cin >> city >> students;

            total += students;
            m[city] += students;
        }
    }
    

    map<string, double>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << " " << (it->second / total) * 100 << endl;
    }

    return 0;
}