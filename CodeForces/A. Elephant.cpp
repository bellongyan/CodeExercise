#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x;
	cin >> x;
	int shang = x / 5;
	int yu = x % 5;
	if (yu == 0) {
		cout << shang << endl;
	} else {
		cout << shang + 1 << endl;
	}

	return 0;
}
