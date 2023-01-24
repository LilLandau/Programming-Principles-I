#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector <pair <int, int>> pairs(n); //внутри вектора инициализурую пары
    for (int i = 0; i < n; i++)
    {
        int first, second;
        cin >> first >> second;
        pairs[i] = make_pair(first, second); //заполняю объект пара двумя значениями
    }
    sort(pairs.begin(), pairs.end());

    for (int i = 0; i < n; i++){ cout << pairs[i].first << " " << pairs[i].second << endl; }
    return 0;
}