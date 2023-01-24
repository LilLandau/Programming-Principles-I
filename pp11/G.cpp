#include <bits/stdc++.h>

using namespace std;

map <string, set <int> > mp;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		int k;
		cin >> str >> k;
		mp[str].insert(k);
	}
	for (auto str : mp) {
		cout << str.first << " ";
		if (str.second.size() < 3)
			cout << "NO BONUS" << endl;
		else 
		cout << "+1" << endl;
	}
	return 0;
}