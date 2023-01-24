#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) { cin >> arr[i]; }
    

    vector <int> even;
    vector <int> odd;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0) { even.push_back(arr[i]); }
        else { odd.push_back(arr[i]); }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    for (int i = even.size()-1; i >= 0; --i) { cout << even[i] << " "; }
    for (int i = 0; i < odd.size(); ++i) { cout << odd[i] << " "; }
    return 0;
}