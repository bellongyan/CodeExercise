#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int k, n, number;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;
		int ji = 0, ou = 0;
		for (int j = 0; j < 2 * n; j++) {
			cin >> number;
			if (number % 2 == 0) ou++;
			else ji++;
		}
		if (ji == ou) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
