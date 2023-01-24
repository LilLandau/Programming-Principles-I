#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m,x;

    cin >> n;
    int *a = new int[n];
    for (int i=0; i<n; i++) { cin >> a[i]; }

    cin >> m;
    int *b = new int[m];
    for (int i=0; i<m; i++) { cin >> b[i]; }

    x = n + m;
    int *c = new int[x];
    for (int i=0; i<n; i++)
    {
        c[i] = a[i];
    }
    for (int i=n; i<x; i++)
    {
        c[i] = b[i - n];
    }
    
    sort(c, c + x);
    for (int i=0; i<x; i++)
    {
        cout << c[i] << " ";
    }
    
    return 0;
}