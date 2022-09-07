/*
字符串 APPAPT 中包含了两个单词 PAT，其中第一个 PAT 是第 2 位(P)，第 4 位(A)，第 6 位(T)；第二个 PAT 是第 3 位(P)，第 4 位(A)，第 6 位(T)。

现给定字符串，问一共可以形成多少个 PAT？

输入格式：
输入只有一行，包含一个字符串，长度不超过 10^5 ，只包含 P、A、T 三种字母。

输出格式：
在一行中输出给定字符串中包含多少个 PAT。由于结果可能比较大，只输出对 1000000007 取余数的结果。
*/

// @Author:longyan
// @Date:2022/7/16

#include<iostream>

using namespace std;

const int r = 1000000007;
int main() {
	const int Maxn = 10000;
	int p[Maxn] = {0}, a[Maxn] = {0}, t[Maxn] = {0};
	string pat;
	cin >> pat;
	for (int i = 0; i < pat.length(); i++) {
		if (pat[i] == 'P') p[i]++;
		if (pat[i] == 'A') a[i]++;
		if (pat[i] == 'T') t[i]++;
	}

	int result = 0;

	for (int i = 0; i < pat.length(); i++) {
		if (p[i] == 0) continue;
		for (int j = i + 1; j < pat.length(); j++) {
			if (a[j] == 0) continue;
			for (int k = j + 1; k < pat.length(); k++) {
				if (t[k] == 0) continue;
				if (i < j && i < k && j < k) result++;
			}
		}
	}

	result %= r;

	cout << result << endl;

	return 0;
}
