#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map <pair <string, string>, double> m;
    for (int i = 0; i < n; i++)
    {
        string secondName, firstName;
        cin >> secondName >> firstName;
        pair <string, string> name = make_pair(secondName, firstName);

        int totalCredits = 0;
        double GPA = 0;
        int num;
        cin >> num;
        
        for (int j = 0; j < num; j++)
        {
            string grade;
            int credit;
            cin >> grade >> credit;
            
            totalCredits += credit;
            if (grade == "A+")
                GPA += credit*4.00;
            if (grade == "A")
                GPA += credit*3.75;
            if (grade == "B+")
                GPA += credit*3.50;
            if (grade == "B")
                GPA += credit*3.00;
            if (grade == "C+")
                GPA += credit*2.50;
            if (grade == "C")
                GPA += credit*2.00;
            if (grade == "D+")
                GPA += credit*1.50;
            if (grade == "D")
                GPA += credit*1.00;
            if (grade == "F")
                GPA += credit*0;
        }
        
        m[name] = GPA/totalCredits;
    }
    
    map <double, pair<string, string>> reversedM;
    for (pair< pair<string, string>, double> pair: m)
    {
        reversedM[pair.second] = pair.first;
    }
    
    map <double, pair<string, string>>:: iterator it;
    for (it = reversedM.begin(); it != reversedM.end(); ++it)
    {
        cout << it->second.first << " " << it->second.second << " ";
        cout << fixed << showpoint;
        cout << setprecision(3);
        cout << it->first << endl;
    }

    return 0;
}