/*
请编写程序，找出一段给定文字中出现最频繁的那个英文字母。

输入格式：
输入在一行中给出一个长度不超过 1000 的字符串。字符串由 ASCII 码表中任意可见字符及空格组成，至少包含 1 个英文字母，以回车结束（回车不算在内）。

输出格式：
在一行中输出出现频率最高的那个英文字母及其出现次数，其间以空格分隔。如果有并列，则输出按字母序最小的那个字母。统计时不区分大小写，输出小写字母。
*/

// @Author:longyan
// @Date:2022/7/18

#include<iostream>
#include<cctype>

using namespace std;

int main() {
	int alpha[200] = {0};
	string s;
	getline(cin, s);

	for (char i : s) {
		if (isupper(i)) i = tolower(i);
		alpha[i]++;
	}

	int m = 0, index = 0;
	for (int i = 96; i < 123; i++) {
		if (alpha[i] > m) {
			m = alpha[i];
			index = i;
		}
	}

	cout << (char)index << " " << m;
	return 0;
}
