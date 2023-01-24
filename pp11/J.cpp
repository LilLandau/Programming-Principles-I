#include <bits/stdc++.h>

using namespace std;

struct Point {
	int n,m;

	Point() {}
	Point(int n, int m) {
		this->n = n;
		this->m = m;
	}
};

Point p;

bool cmp(Point a, Point b) {
	double d = sqrt(pow(a.n - p.n,2) + pow(a.m - p.m,2));
	double d1 = sqrt(pow(b.n - p.n,2) + pow (b.m - p.m,2));
	return d < d1;
}

int main() {
	int x,y;
	cin >> x >> y;
	p.n = x;
	p.m = y;
	int k;
	cin >> k;
	vector <Point> v;
	for (int i = 0; i < k; i++){
		cin >> x >> y;
		v.push_back(Point(x,y));
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].n << " " << v[i].m << endl;


}