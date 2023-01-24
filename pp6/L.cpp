#include <iostream>
using namespace std;
void lb6m(string s, int k){
    int cnt = 1;
    bool flag = false;
for (int i = 0; i <s.size() ; i++){
    if (s[i] >= '0' && s[i] <= '9'){
        cnt = 1;
        for (int j = 1; j <= k; j++)
        {
            if (s[i+j] >= '0' && s[i+j] <= '9') { cnt++; }
        }
        if (cnt >= k) { flag = true; }
}
}

if (flag == true) { cout << "Valid"; }
else if (flag == false) { cout << "Not valid"; }
}

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    if (k == 1) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                cout << "Valid";
                return 0;
            }
        }
    }

    lb6m(s,k);
}