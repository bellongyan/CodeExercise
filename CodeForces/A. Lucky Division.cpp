#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

string numbers[1001];
int main() {
	int number;
	cin >> number;

	int n[11] = {4, 7, 47, 74, 447, 474, 477, 744, 747, 774, 777};

	for (int i = 1000; i > 0; i--)
		for (int j = 0; j < 11; j++)
			if (i % n[j] == 0)
				numbers[i] = "YES";

	if (numbers[number] == "YES") cout << numbers[number] << endl;
	else cout << "NO" << endl;

	return 0;
}
