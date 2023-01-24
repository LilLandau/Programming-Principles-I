#include <iostream>

using namespace std;

int main(){
    string str;
    string n;
    getline(cin,str);
    for(int i = 0; i < str.size(); i++){
        if (str[i] >= 'A' && str[i] <= 'Y' || str[i] >= 'a' && str[i] <= 'y'){
            n = str[i]+ 1;
            cout << n;
        }
        else if(str[i] == 'Z' || str[i] == 'z'){
            n = str[i]-25;
            cout << n;
        }
        else
        cout << str[i];
    }
    return 0;
}