#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < str.size(); i++){
        sum = str[i] + sum;
    }
    if (sum > 300){
        cout << "It is tasty!";
    }
    else{
        cout << "Oh, no!";
    }
}