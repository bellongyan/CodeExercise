/*
给定一个长度不超过 10^4  的、仅由英文字母构成的字符串。请将字符重新调整顺序，按 PATestPATest.... 这样的顺序输出，并忽略其它字符。当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按 PATest 的顺序打印，直到所有字符都被输出。

输入格式：
输入在一行中给出一个长度不超过 10^4  的、仅由英文字母构成的非空字符串。

输出格式：
在一行中按题目要求输出排序后的字符串。题目保证输出非空。
*/

// @Author:longyan
// @Date:2022/7/19

#include<iostream>

using namespace std;

int main() {
	int m[128] = {0};
	string s;
	getline(cin, s);
	for (char c : s) m[c]++;
	while (m['P'] > 0 || m['T'] > 0 || m['A'] > 0 || m['t'] > 0 || m['e'] > 0 || m['s'] > 0) {
		if (m['P']-- > 0) cout << "P";
		if (m['A']-- > 0) cout << "A";
		if (m['T']-- > 0) cout << "T";
		if (m['e']-- > 0) cout << "e";
		if (m['s']-- > 0) cout << "s";
		if (m['t']-- > 0) cout << "t";
	}

	return 0;
}
