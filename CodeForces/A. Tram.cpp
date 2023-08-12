#include <iostream>
#include <algorithm>

using namespace std;

int a[1001], b[1001];
int main() {
	int n;
	int sum = 0, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		sum = sum - a[i] + b[i];
		if (sum >= max) max = sum;
	}

	cout << max << endl;
	return 0;
}
