#include <iostream>
#include <algorithm>

using namespace std;

string str;
char output[5];
int main() {
	cin >> str;

	for (char ch : str) {
		if (ch == 'h' && output[0] != 'h') {
			output[0] = ch;
			continue;
		} else if (ch == 'e' && output[0] == 'h' && output[1] != 'e') {
			output[1] = ch;
			continue;
		} else if (ch == 'l' && output[1] == 'e' && output[2] != 'l') {
			output[2] = ch;
			continue;
		} else if (ch == 'l' && output[2] == 'l' && output[3] != 'l') {
			output[3] = ch;
			continue;
		} else if (ch == 'o' && output[3] == 'l' && output[4] != 'o') {
			output[4] = ch;
			continue;
		} else continue;
	}

	if (output[0] == 'h' && output[1] == 'e' && output[2] == 'l' && output[3] == 'l' && output[4] == 'o')
		cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
