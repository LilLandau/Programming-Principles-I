#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    set <string> mySet;
    vector <string> myVec;
    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mySet.find(s) != mySet.end()) { myVec.push_back("user already exists"); }
        else
        {
            mySet.insert(s);
            myVec.push_back("new user added");
        }
    }
    
    for (int i = 0; i < myVec.size(); i++) { cout << myVec[i] << endl; }
    return 0;
}