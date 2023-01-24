#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isSum(string num) {
    int oddSum = 0;
    int evenSum = 0;
    for (int i = 0; i < num.size(); i++) {
        if (i % 2 == 0) { oddSum += num[i]; }
        if (i % 2 != 0) { evenSum += num[i]; }
    }
    if (evenSum == oddSum) { return true; }
    else { return false; }

}

int main() {
    string num;
    getline(cin, num);
    if (isSum(num)) { cout << "YES"; }
    else { cout << "NO"; }
    
    return 0;
}