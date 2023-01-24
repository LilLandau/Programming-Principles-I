#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <string> names;

    for (int i = 0; i < n; i++)
    {
        int command;
        cin >> command;
        if (command == 1)
        {
            string name;
            cin >> name;
            names.push_back(name);
        }
        if (command == 2)
        {
            names.erase(names.begin());
            vector <string>(names).swap(names);
        }
        
        if (names.size() == 0) { cout << "queue is empty" << endl; }
        else
        {
            cout << names[0] << endl;
        }
    }
    
    return 0;
}