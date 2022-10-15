/*
  批改多选题是比较麻烦的事情，本题就请你写个程序帮助老师批改多选题，并且指出哪道题错的人最多。

  输入格式：
  输入在第一行给出两个正整数 N（≤ 1000）和 M（≤ 100），分别是学生人数和多选题的个数。随后 M 行，每行顺次给出一道题的满分值（不超过 5 的正整数）、选项个数（不少于 2 且不超过 5 的正整数）、正确选项个数（不超过选项个数的正整数）、所有正确选项。注意每题的选项从小写英文字母 a 开始顺次排列。各项间以 1 个空格分隔。最后 N 行，每行给出一个学生的答题情况，其每题答案格式为 (选中的选项个数 选项1 ……)，按题目顺序给出。注意：题目保证学生的答题情况是合法的，即不存在选中的选项数超过实际选项数的情况。

  输出格式：
  按照输入的顺序给出每个学生的得分，每个分数占一行。注意判题时只有选择全部正确才能得到该题的分数。最后一行输出错得最多的题目的错误次数和编号（题目按照输入的顺序从 1 开始编号）。如果有并列，则按编号递增顺序输出。数字间用空格分隔，行首尾不得有多余空格。如果所有题目都没有人错，则在最后一行输出 Too simple。
 */

// @Author:longyan
// @Date:2022/10/15

#include <cstdio>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int n, m, temp, k;
	scanf("%d%d", &n, &m);

	vector<set<char>> right(m);
	vector<int> total(m), wrongCnt(m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &total[i], &temp, &k);
		for (int j = 0; j < k; j++)
		{
			char c;
			scanf(" %c", &c);
			right[i].insert(c);
		}
	}

	for (int i = 0; i < n; i++)
	{
		int score = 0;
		scanf("\n");
		for (int j = 0; j < m; j++)
		{
			if (j != 0)
				scanf(" ");
			scanf("(%d", &k);
			set<char> st;
			char c;
			for (int l = 0; l < k; l++)
			{
				scanf(" %c", &c);
				st.insert(c);
			}
			scanf(")");
			if (st == right[j])
			{
				score += total[j];
			}
			else
			{
				wrongCnt[j]++;
			}
		}
		printf("%d\n", score);
	}
	int maxWrongCnt = 0;
	for (int i = 0; i < m; i++)
	{
		if (wrongCnt[i] > maxWrongCnt)
		{
			maxWrongCnt = wrongCnt[i];
		}
	}
	if (maxWrongCnt == 0)
		printf("Too simple");
	else
	{
		printf("%d", maxWrongCnt);
		for (int i = 0; i < m; i++)
		{
			if (wrongCnt[i] == maxWrongCnt)
			{
				printf(" %d", i + 1);
			}
		}
	}
	printf("\n");
	return 0;
}
