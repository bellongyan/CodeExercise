#include <iostream>
#include <algorithm>

using namespace std;

int Marathon[4];
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int bigger = 0;
		cin >> Marathon[0] >> Marathon[1] >> Marathon[2] >> Marathon[3];
		if (Marathon[1] > Marathon[0]) bigger++;
		if (Marathon[2] > Marathon[0]) bigger++;
		if (Marathon[3] > Marathon[0]) bigger++;

		cout << bigger << endl;
	}
	return  0;
}
