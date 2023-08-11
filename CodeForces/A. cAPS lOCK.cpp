#include <iostream>
#include <algorithm>

using namespace std;

string word;
int main() {
	cin >> word;
	int count = 0;
	for (int i = 1; i < word.length(); i++)
		if (isupper(word[i]))
			count++;

	if (++count == word.length()) {
		if (islower(word[0])) word[0] = toupper(word[0]);
		else word[0] = tolower(word[0]);
		for (int i = 1; i < word.length(); i++) word[i] = tolower(word[i]);
	}
	
	cout << word;
	return 0;
}
