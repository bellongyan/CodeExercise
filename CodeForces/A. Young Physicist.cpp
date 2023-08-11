#include <iostream>
#include <algorithm>

using namespace std;

int sumX, sumY, sumZ;
int main() {
	int n;
	cin >> n;
	int x, y, z;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> z;
		sumX += x; sumY += y; sumZ+=z;
	}
	
	if (sumX == 0 && sumY == 0 && sumZ == 0)cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
