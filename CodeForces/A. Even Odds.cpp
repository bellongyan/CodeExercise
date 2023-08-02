#include <iostream>
#include <algorithm>

using namespace std;

void print(long long int n, long long int  k, long long int  half) {
	if (k <= half) {
		cout << 2 * k - 1 << endl;
	} else {
		cout << 2 * k - n << endl;
	}
}

int main() {
	long long int n, k;
	cin >> n >> k;
	long long int half = (n + 1) / 2;

	if (n % 2 == 0) {
		print(n, k, half);
	} else {
		print(++n, k, half);
	}

	return 0;
}
