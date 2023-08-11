#include <iostream>
#include <algorithm>

using namespace std;

int digit[100];
int main() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> digit[i];
		sum += digit[i] % 2;
	}

	if (sum == 1) {
		for (int i = 0; i < n; i++)
			if (digit[i] % 2 != 0)
				cout << i + 1 << endl;
	} else if (sum == n - 1) {
		for (int i = 0; i < n; i++)
			if (digit[i] % 2 == 0)
				cout << i + 1 << endl;
	}

	return 0;
}
