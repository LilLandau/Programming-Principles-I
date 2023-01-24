#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string str, str1, str2;
    cin >> str;
    str2 = str;
    int n = str.length();
    
    while(n > 0){
        str1 = str;
        reverse(str.begin(), str.end());
        if(str1 != str){
            break;
        }
        str2.pop_back();
        str = str2;
        n--;
    }
    cout << n;
}