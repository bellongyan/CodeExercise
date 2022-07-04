/*
为了用事实说明挖掘机技术到底哪家强，PAT 组织了一场挖掘机技能大赛。现请你根据比赛结果统计出技术最强的那个学校。

输入格式：
输入在第 1 行给出不超过 10^5  的正整数 N，即参赛人数。随后 N 行，每行给出一位参赛者的信息和成绩，包括其所代表的学校的编号（从 1 开始连续编号）、及其比赛成绩（百分制），中间以空格分隔。

输出格式：
在一行中给出总得分最高的学校的编号、及其总分，中间以空格分隔。题目保证答案唯一，没有并列。
*/

// @Author:longyan
// @Date:2022/7/4

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int id, score;
	int s[100001] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> id >> score;
		s[id] += score;
	}

	int index = 1;
	int m = s[1];
	for (int i = 2; i <= n; i++)
	{
		if (s[i] > m)
		{
			m = s[i];
			index = i;
		}
	}

	cout << index << " " << m;
	return 0;
}
