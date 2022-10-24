/*
  判断题的评判很简单，本题就要求你写个简单的程序帮助老师判题并统计学生们判断题的得分。
  
  输入格式：
  输入在第一行给出两个不超过 100 的正整数 N 和 M，分别是学生人数和判断题数量。第二行给出 M 个不超过 5 的正整数，是每道题的满分值。第三行给出每道题对应的正确答案，0 代表“非”，1 代表“是”。随后 N 行，每行给出一个学生的解答。数字间均以空格分隔。
  
  输出格式：
  按照输入的顺序输出每个学生的得分，每个分数占一行。
 */

// @Author:longyan
// @Date:2022/10/23

#include <iostream>
#include <vector>

using namespace std;

struct right
{
	int score[100] = {-1};
	int answer[100] = {-1};
};

struct stu
{
	int stu_ans[100] = {-1};
};

int main()
{
	int n, m;
	cin >> n >> m;
	struct right ans;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 0)
				cin >> ans.score[j];
			else if (i == 1)
				cin >> ans.answer[j];
		}
	}

	vector<stu> s;
	for (int i = 0; i < n; i++)
	{
		struct stu st;
		for (int j = 0; j < m; j++)
		{
			cin >> st.stu_ans[j];
		}
		s.push_back(st);
	}

	int sco[100] = {0};
	int cnt = 0;
	for (stu i : s)
	{
		for (int j = 0; j < m; j++)
		{
			if (i.stu_ans[j] == ans.answer[j])
				sco[cnt] += ans.score[j];
		}
		cout << sco[cnt] << endl;
		cnt++;
	}

	return 0;
}
