/*
本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。
输入格式：
输入在一行中依次给出 A 和 B，中间以 1 空格分隔。
输出格式：
在一行中依次输出 Q 和 R，中间以 1 空格分隔。
*/

// @Author:longyan
// @Date:2022/6/17

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int b;
	cin >> a >> b;
	int q, r = 0;

	if (a.length() == 1)
	{
		q = (a[0] - '0' + r * 10) / b;
		r = (a[0] - '0' + r * 10) % b;
		cout << q;
	}
	else
	{
		q = (a[0] - '0' + r * 10) / b;
		r = (a[0] - '0' + r * 10) % b;

		if (q != 0)
		{
			cout << q;
		}

		for (int i = 1; i < a.length(); i++)
		{
			q = (a[i] - '0' + r * 10) / b;
			r = (a[i] - '0' + r * 10) % b;
			cout << q;
		}
	}
	cout << " " << r << endl;
	return 0;
}
