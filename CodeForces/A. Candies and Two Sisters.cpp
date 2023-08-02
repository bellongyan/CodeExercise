#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		
		if (num == 1 || num == 2) {
			cout << "0" << endl;
			continue;
		}
		cout << (num - 1) / 2 << endl;
	}

	return 0;
}
