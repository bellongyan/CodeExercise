#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int x = 0;
	string X;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> X;
		if (X == "X++" || X == "++X") ++x;
		else if (X == "X--" || X == "--X") --x;
	}

	cout << x << endl;

	return 0;
}
