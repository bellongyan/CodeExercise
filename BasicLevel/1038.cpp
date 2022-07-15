/*
本题要求读入 N 名学生的成绩，将获得某一给定分数的学生人数输出。

输入格式：
输入在第 1 行给出不超过 10^5 的正整数 N，即学生总人数。随后一行给出 N 名学生的百分制整数成绩，中间以空格分隔。最后一行给出要查询的分数个数 K（不超过 N 的正整数），随后是 K 个分数，中间以空格分隔。

输出格式：
在一行中按查询顺序给出得分等于指定分数的学生人数，中间以空格分隔，但行末不得有多余空格。
*/

// @Author:longyan
// @Date:2022/7/15

#include <iostream>

using namespace std;

int main()
{
	const int Maxn = 100000;
	int n;
	cin >> n;
	int score[Maxn];
	for (int i = 0; i < n; i++)
		cin >> score[i];

	int k;
	cin >> k;
	int exam[Maxn];
	int cnt[Maxn];
	for (int i = 0; i < k; i++)
	{
		cin >> exam[i];
		for (int j = 0; j < n; j++)
		{
			if (score[j] == exam[i])
				cnt[i]++;
		}
	}

	for (int i = 0; i < k; i++)
	{
		cout << cnt[i];
		if (i != k - 1)
			cout << " ";
		else
			cout << endl;
	}

	return 0;
}
