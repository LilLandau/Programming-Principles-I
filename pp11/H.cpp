#include<bits/stdc++.h>
using namespace std;
 
int main(){

	int t;
	cin >> t;
	string str;
	cin >> str;
	for(int i = 0; i < str.length();i++) {
		str[i] = char((str[i] - 'A' + t) % 26 + 65);
	}
 
	cout << str;
	return 0;
}