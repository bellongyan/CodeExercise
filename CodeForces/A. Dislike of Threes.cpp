#include <iostream>
#include <algorithm>

using namespace std;

int ks[1000];
int main() {
	int ki = 0;
	for (int j = 1; j <= 1666; j++) {
		if (j % 3 == 0)
			continue;
		int k = j;
		while (k / 10 != 0) k %= 10;
		if (k == 3) continue;
		ks[ki] = j;
		ki++;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int number;
		cin >> number;
		cout << ks[number - 1] << endl;
	}

	return 0;
}
