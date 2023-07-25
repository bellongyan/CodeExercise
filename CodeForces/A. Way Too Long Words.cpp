#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.length() <= 10) {
			cout << str << endl;
		} else {
			char head, rear;
			head = str[0];
			rear = str[str.length() - 1];
			cout << head << str.length() - 2 << rear << endl;
		}
	}
	return 0;
}
