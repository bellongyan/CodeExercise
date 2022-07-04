#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int id, score;
	int s[100001] = {0};
	for (int i = 0; i < n; i++) {
		cin >> id >> score;
		s[id] += score;
	}

	int index = 1;
	int m = s[1];
	for (int i = 2; i <= n; i++) {
		if (s[i] > m) {
			m = s[i];
			index = i;
		}
	}

	cout << index << " " << m;
	return 0;
}
