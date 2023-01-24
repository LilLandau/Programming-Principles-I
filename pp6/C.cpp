#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void intersection(int size) {
    int a[size];
    int b[size];

    for (int i = 0; i < size; i++) { cin >> a[i]; }
    for (int i = 0; i < size; i++) { cin >> b[i]; }

    int c[100];
    int d[100];
    for (int i = 1; i <= 100; i++)
    {
        c[i] = 0;
        d[i] = 0;
    }
    
    for (int i = 0; i < size; i++) 
    {
        int k;
        k = a[i];
        ++c[k];
        
        int l;  
        l = b[i];
        ++d[l];
    }

    int count;
    for (int i = 1; i <= 100; i++)
    {
        if (c[i] >= d[i]) { count += d[i]; }
        else if (c[i] <= d[i]) { count += c[i]; }
    }
    cout << count;
}

int main() {
    int size;
    cin >> size;

    intersection(size);
    return 0;
}