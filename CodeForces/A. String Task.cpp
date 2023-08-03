#include <iostream>
#include <algorithm>

using namespace std;

string str;
string output;
int main() {
	cin >> str;
//	A,O,Y,E,U,I
	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
		if (str [i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i')
			continue;
		else
			cout << "." << str[i];
	}
	return 0;
}
