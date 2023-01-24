#include <bits/stdc++.h>
using namespace std;


bool ispalindrome(string str) {
	string rev = str;
	reverse(str.begin(), str.end());
	return rev==str;
}

int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	do {
		if (ispalindrome(s)) {
			cout << "ZA WARUDO TOKI WO TOMARE" << endl;
			return 0;
		}
	} 
	while(next_permutation(s.begin(), s.end()));
	cout << "JOJO";
	return 0;
}