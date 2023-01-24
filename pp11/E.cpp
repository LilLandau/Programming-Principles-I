#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;
	vector <map <char, int> > hash;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		map <char, int> m;
		for (int j = 0; j < str.size(); j++) {
			m[str[j]]++;
		}
		hash.push_back(m);
	}
    bool wow = false;
	for (char ch = 'a'; ch <= 'z'; ch++) {
		bool ok = true;
		for (auto h : hash) {
			if (h[ch]==0) {
				ok = false;
			}
		}
		if (ok) {
			cout << ch << " ";
			wow = true;
		}

	}
	if (!wow)
	    cout << "NO COMMON CHARACTERS";
	return 0;
}