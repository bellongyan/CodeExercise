#include <iostream>
#include <algorithm>

using namespace std;

string team;
int main() {
	int cnt = 1;
	cin >> team;

	for (int i = 1; i <= team.length(); i++) {
		if (team[i] == team[i - 1]) {
			cnt++;
			if (cnt == 7) {
				cout << "YES" << endl;
				return 0;
			}
		} else cnt = 1;
	}

	cout << "NO" << endl;

	return 0;
}
