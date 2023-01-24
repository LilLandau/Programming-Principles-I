#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<pair<string, string>, pair<string, string>> m;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            string s1, s2, s3, s4;
            cin >> s1 >> s2 >> s3 >> s4;
            s1 = s1 + " " + s2 + " ";
            s3 = s3 + " " + s4;

            string s5, s6, s7, s8;
            cin >> s5 >> s6 >> s7 >> s8;
            s5 = s5 + " " + s6 + " ";
            s7 = s7 + " " + s8;

            m[make_pair(s1, s3)] = make_pair(s5, s7);
        }

        map<pair<string, string>, pair<string, string>>::iterator it;

        if ((it->first.first + it->first.second) == (it->second.first + it->second.second))
        {
            string firstStudent, secondStudent;
            string firstPoints, secondPoints;

            int space = 0;
            for (auto c : it->first.first)
            {

                while (c != ' ')
                {
                    firstStudent += c;
                    ++space;
                }
            }
            for (int i = space + 1; i < it->first.first.size(); i++)
            {
                while (it->first.first[i] != ' ')
                {
                    firstPoints += it->first.first[i];
                }
            }

            space = 0;
            for (auto c : it->first.second)
            {

                while (c != ' ')
                {
                    secondStudent += c;
                    ++space;
                }
            }
            for (int i = space + 1; i < it->first.second.size(); i++)
            {
                secondPoints += it->first.second[i];
            }

            int sumOfPoints = stoi(firstPoints) + stoi(secondPoints);
            
            cout << firstStudent << " " << "and" << " " << secondStudent << " " << sumOfPoints;
        }
    }

    return 0;
}