#include <iostream>
#include <algorithm>

using namespace std;

int coins[100];
int cmp(int a, int b) {
	return a > b;
}
int main() {
	int n, cnt = 0;
	int my = 0, bro = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> coins[i], bro += coins[i];

	sort(coins, coins + n, cmp);

	for (int i = 0; i < n; i++) {
		my += coins[i];
		bro -= coins[i];
		cnt++;
		if (my > bro) {
			cout << cnt << endl;
			return 0;
		}
	}
}
