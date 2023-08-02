#include <iostream>
#include <algorithm>

using namespace std;


char a[101], b[101];

int cmp(char a, char b) {
	if (a > b)return 1;
	else if (a == b) return 0;
	else return -1;
}
int main() {
	cin >> a >> b;

	for (int i = 0; i < 101; i++) {
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);

		if (a[i] == '\000') break;

		if (cmp(a[i], b[i]) == 0)
			continue;
		else if (cmp(a[i], b[i]) == 1) {
			cout << 1 << endl;
			return 0;
		} else if (cmp(a[i], b[i] == -1)) {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;

	return 0;
}
