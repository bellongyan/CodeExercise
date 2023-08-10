#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int countM = 0, countC = 0;
	for (int i = 0 ; i < n; i++) {
		int Mishka, Chris;
		cin >> Mishka >> Chris;
		if (Mishka > Chris) countM++;
		else if (Mishka < Chris) countC++;
		else continue;
	}

	if (countM > countC) cout << "Mishka" << endl;
	else if (countM < countC) cout << "Chris" << endl;
	else cout << "Friendship is magic!^^" << endl;

	return 0;
}
