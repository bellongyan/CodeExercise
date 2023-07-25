/*
给定一段一段的绳子，你需要把它们串成一条绳。每次串连的时候，是把两段绳子对折，再如下图所示套接在一起。这样得到的绳子又被当成是另一段绳子，可以再次对折去跟另一段绳子串连。每次串连后，原来两段绳子的长度就会减半。

rope.jpg

给定 N 段绳子的长度，你需要找出它们能串成的绳子的最大长度。

输入格式：
每个输入包含 1 个测试用例。每个测试用例第 1 行给出正整数 N (2≤N≤10^4 )；第 2 行给出 N 个正整数，即原始绳段的长度，数字间以空格分隔。所有整数都不超过10^4 。

输出格式：
在一行中输出能够串成的绳子的最大长度。结果向下取整，即取为不超过最大长度的最近整数。
*/

// @Author:longyan
// @Date:2022/11/17

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];

	sort(num.begin(), num.end());

	int result = num[0];
	for (int i = 1; i < n; i++)
		result = (result + num[i]) / 2;

	cout << result << endl;

	return 0;
}
