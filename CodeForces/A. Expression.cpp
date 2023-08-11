#include <iostream>
#include <algorithm>

using namespace std;

int digits[3], answer[6];
int main() {
	for (int i = 0; i < 3; i ++) cin >> digits[i];

	answer[0] = digits[0] + digits[1] + digits[2];
	answer[1] = digits[0] * digits[1] * digits[2];
	answer[2] = digits[0] + digits[1] * digits[2];
	answer[3] = (digits[0] + digits[1]) * digits[2];
	answer[4] = digits[0] * digits[1] + digits[2];
	answer[5] = digits[0] * (digits[1] + digits[2]);
	
	sort(answer, answer+6);
	
	cout<<answer[5]<<endl;

	return 0;
}
