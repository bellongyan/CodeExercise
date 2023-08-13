#include <iostream>
#include <algorithm>

using namespace std;

int line[101];
int main() {
	int n, m;
	int l, r;
	cin >> n >> m;
	int ans = m;
	for (int i = 1; i <= n; i++) {
		cin >> l >> r;
		for (int j = l; j <= r; j++) {
			if (line[j] == 0) {
				ans--;
				line[j] = 1;
			}
		}
	}

	if (ans == 0) {
		cout << 0 << endl;
		return 0;
	} else if (ans != m) cout << ans << endl;

	for (int i = 1; i <= m; i++) {
		if (line[i] == 0) {
			if (ans != 1) {
				cout << i << " ";
				ans--;
			} else cout << i << endl;
		}
	}

	return 0;
}
