#include <iostream>
#include <stack>

using namespace std;

stack<char> brackets;
string str;

int main() {
	cin >> str;

	for (char ch : str) {
		if (ch == '(' || ch == '{' || ch == '<' || ch == '[') brackets.push(ch);
		else {
			if (brackets.empty()) {
				brackets.push(ch);
				break;
			} else if ((brackets.top() == '(' && ch == ')') || (brackets.top() == '{' && ch == '}') ||
			           (brackets.top() == '<' && ch == '>') || (brackets.top() == '[' && ch == ']'))
				brackets.pop();
		}
	}

	if (brackets.empty()) printf("yes\n");
	else printf("no\n");

	return 0;
}
