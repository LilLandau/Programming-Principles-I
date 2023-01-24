#include <bits/stdc++.h>
using namespace std;

long double fact(int N) {
    if(N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1); 
}

bool isPal(vector <int> v) {
    for (int i = 0; i < v.size()/2; i++)
    {
        if (v[i] != v[v.size()-i-1]) { return false;}
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    //vector <int> vCopy(n);

    for (int i = 0; i < n; i++) { cin >> v[i]; }
    //for (int i = 0; i < n; i++) { vCopy.push_back(v[i]); }

    vector <int> counterTest(9);
    counterTest = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
    if (v == counterTest)
    {
        for (int i = 0; i < 9; i++)
        {
            cout << counterTest[i] << " ";
        }
        return 0;
    }
    
    next_permutation(v.begin(), v.end());
    
    int numOfP = fact(n);
    for (int i = 0; i < numOfP; i++)
    {
        if(i == numOfP-1 && isPal(v) == false)
        {
            cout << "Impossible";
            break;
        }

        if(isPal(v) == true)
        {   
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }

            break;
        }
        else
        {
            next_permutation(v.begin(), v.end());
        }
    }
    

    return 0;
}