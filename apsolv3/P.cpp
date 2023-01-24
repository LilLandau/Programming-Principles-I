#include <bits/stdc++.h>

using namespace std;

string strToBool(string str){
    cin >> str;
    if (str == "1"){
        return "true";
    }
    else if (str == "0"){
        return "false";
    }
    else{
        return str;
    }
}
int main(){
    string str;
    cout << strToBool(str);
}