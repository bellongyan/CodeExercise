#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int P, V, T;
		cin >> P >> V >> T;
		if (((P == 1) && (V == 1)) || ((P == 1) && (T == 1)) || ((V == 1) && (T == 1))) {
			count++;
		}
	}

	cout << count << endl;
	return 0;
}

