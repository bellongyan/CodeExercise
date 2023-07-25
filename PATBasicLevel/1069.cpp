/*
  小明 PAT 考了满分，高兴之余决定发起微博转发抽奖活动，从转发的网友中按顺序每隔 N 个人就发出一个红包。请你编写程序帮助他确定中奖名单。

  输入格式：
  输入第一行给出三个正整数 M（≤ 1000）、N 和 S，分别是转发的总量、小明决定的中奖间隔、以及第一位中奖者的序号（编号从 1 开始）。随后 M 行，顺序给出转发微博的网友的昵称（不超过 20 个字符、不包含空格回车的非空字符串）。

  注意：可能有人转发多次，但不能中奖多次。所以如果处于当前中奖位置的网友已经中过奖，则跳过他顺次取下一位。

  输出格式：
  按照输入的顺序输出中奖名单，每个昵称占一行。如果没有人中奖，则输出 Keep going...。
 */

// @Author:longyan
// @Date:2022/11/13

#include <iostream>
#include <vector>
using namespace std;

bool checkIsInVector(string s, vector<string> v)
{
	for (string i : v)
	{
		if (s == i)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int m, n, s;
	cin >> m >> n >> s;

	vector<string> info;
	vector<string> award;

	for (int i = 0; i < m; i++)
	{
		string str;
		cin >> str;
		info.push_back(str);
	}

	if (m < n)
		cout << "Keep going..." << endl;
	else if (m >= n)
	{
		for (int j = s - 1; j < m; j += n)
		{
			while (checkIsInVector(info[j], award) == true)
				j++;
			if (checkIsInVector(info[j], award) == false)
			{
				award.push_back(info[j]);
				cout << info[j] << endl;
			}
		}
	}

	return 0;
}
