#include <iostream>
#include <algorithm>

using namespace std;

int cmp(int a, int b) {
	return a < b;
}

int main() {
	long long int x[4];
	long long int a, b, c;
	cin >> x[0] >> x[1] >> x[2] >> x[3];

	sort(x, x + 4, cmp);

	a = x[3] - x[2];
	b = x[0] - a;
	c = x[1] - a;
	cout << a << " " << b << " " << c << endl;
	
	return 0;
}
