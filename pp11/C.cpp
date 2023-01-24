#include <bits/stdc++.h>
using namespace std;


map <string, int> m;
int main()
{	
	int t;
	cin >> t;
	int a = 0;
	for (int i = 0; i < t; i++) {
		string str;
		int b;
		cin >> str >> b;
		m[str] += b;
		a += b;
	}

	vector <pair <double, string> > v;
	
	map <string, int> ::iterator it = m.begin();
	for (it = m.begin(); it!=m.end(); it++) {
		v.push_back(make_pair((double)it->second/ a * 100.0, it->first));
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < v.size(); i++)
		cout << v[i].second << " " << v[i].first << "%" << endl;
}