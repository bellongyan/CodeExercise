/*
给定一个 k 位整数 N=dk−1​10k−1+⋯+d1​101+d0​ (0≤di​≤9, i=0,⋯,k−1, dk−1​>0)，请编写程序统计每种不同的个位数字出现的次数。
例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。

输入格式：
每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。

输出格式：
对 N 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。
*/

// @Author:longyan
// @Date:2022/6/19

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string n;
	cin >> n;

	int cnt[10] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	};
	for (auto i : n)
	{
		if (i == '0')
		{
			cnt[0]++;
		}
		else if (i == '1')
		{
			cnt[1]++;
		}
		else if (i == '2')
		{
			cnt[2]++;
		}
		else if (i == '3')
		{
			cnt[3]++;
		}
		else if (i == '4')
		{
			cnt[4]++;
		}
		else if (i == '5')
		{
			cnt[5]++;
		}
		else if (i == '6')
		{
			cnt[6]++;
		}
		else if (i == '7')
		{
			cnt[7]++;
		}
		else if (i == '8')
		{
			cnt[8]++;
		}
		else
		{
			cnt[9]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (cnt[i] != 0)
		{
			cout << i << ":" << cnt[i] << endl;
		}
	}

	return 0;
}
