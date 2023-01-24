#include <iostream>

using namespace std;

int gcd(int a,int b){
     while (b > 0) { 
        a %= b; 
        swap (a, b); 
    } 
    return a; 
} 
 
int main() { 

    int n; 
    cin >> n; 
    int a[n]; 

    for (int i = 0; i < n; i++){ 
        cin >> a[i]; 
    } 
    
    int x = -1; 
    for (int i = 0; i < n; i++){ 
        for (int k = i + 1; k < n; k++){ 
            if (gcd(a[i], a[k]) > x){ 
                x = gcd(a[i], a[k]); 
            } 
        } 
    } 
    cout << x << endl;
}