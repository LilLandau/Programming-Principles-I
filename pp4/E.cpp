#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int  main() {
    int size;
    cin >> size;
    string zvezda = "[*]";

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout << zvezda;
        }
        cout << endl;
    }

    return 0;
}