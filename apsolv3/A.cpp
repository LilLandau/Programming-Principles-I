#include <iostream>
#include <string>

using namespace std;

bool n(string s) { 
    bool flag = false; 
    
    for (int i = 0; i < s.size(); i++){ 
        if (s[i] >= '0' && s[i] <= '9'){ 
            return false; 
        } 
    } 
    return true; 
} 
 
int main() { 
    string s; 
    getline(cin, s); 
    string a = " "; 

    for (int i = 0; i < s.size(); i++){ 
        if (s[i] == ' '){ 
            if (n(a)){ 
                cout << a << endl; 
            } 
            a = ""; 
        } 
        else{ 
            a+= s[i]; 
        } 
    } 
    if (n(a)){ 
        cout << a << endl; 
    } 
}