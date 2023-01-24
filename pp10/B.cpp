#include <iostream> 
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int n = 0;

long long gen() {
    long long d = powl(n, n); //для long long использовать powl
    ++n;
    return d;
}

int main() {
    int a;
    cin >> a;
    vector <long long>v(a+1);
    generate(v.begin(), v.end(), gen);

    vector <long long>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) { cout << *it << " "; }
    return 0;
}