#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long int n;
	cin >> n;
	for (long long int i = 0; i < n; i++) {
		long long int a, b;
		cin >> a >> b;
		if (b > a) {
			cout << b - a << endl;
			continue;
		} else if (a == b || a % b == 0) {
			cout << "0" << endl;
		} else {
			cout << b - a % b << endl;
		}
	}

	return 0;
}
