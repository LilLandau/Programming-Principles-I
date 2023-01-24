#include <bits/stdc++.h>
using namespace std;

bool vending(int a[], int order, int b[]) {
    if (order == 0)
    {
        for (int i = 0; i < 7; i++)
        {
            b[i] = a[i];
        }
        return true;
    }
    
    if (order % 100 == 0 && a[6] > 0)
    {
        order = order - 100;
        --a[6];
        return vending(a, order, b);
    }

    if (order % 50 == 0 && a[5] > 0)
    {
        order = order - 50;
        --a[5];
        return vending(a, order, b);
    }

    if (order % 20 == 0 && a[4] > 0)
    {
        order = order - 20;
        --a[4];
        return vending(a, order, b);
    }

    if (order % 10 == 0 && a[3] > 0)
    {
        order = order - 10;
        --a[3];
        return vending(a, order, b);
    }

    if (order % 5 == 0 && a[2] > 0)
    {
        order = order - 5;
        --a[2];
        return vending(a, order, b);
    }

    if (order % 2 == 0 && a[1] > 0)
    {
        order = order - 2;
        --a[1];
        return vending(a, order, b);
    }

    if (order % 1 == 0 && a[0] > 0)
    {
        order = order - 1;
        --a[0];
        return vending(a, order, b);
    }

    for (int i = 0; i < 7; ++i)
    {
        a[i] = b[i];
    }
    return false;
}

int main() {
    int a[7];
    int b[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int order;
        cin >> order;

        bool flag = vending(a, order, b);
        if (flag) { cout << "Transaction accepted!" << endl; }
        else { cout << "Transaction stopped!" << endl; }
    }
    
    return 0;
}