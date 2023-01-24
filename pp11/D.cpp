#include <iostream>

using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	int ggwp[a][b];
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cin >> ggwp[i][j];
		}
	}
	bool ok = true;
	for (int i = 0; i < a - 1; i++){
		for (int j = 0; j < b-1; j++){
			if ((ggwp[i][j] + ggwp[i][j + 1] + ggwp[i + 1][j] + ggwp[i + 1][j + 1]) % 4 == 0)
				ok = false;
		}
	}
	if (ok) 
		cout << "YES";
    else 
	cout << "NO";
	return 0;
}