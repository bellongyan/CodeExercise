/*
给定数字 0-9 各若干个。你可以以任意顺序排列这些数字，但必须全部使用。目标是使得最后得到的数尽可能小（注意 0 不能做首位）。例如：给定两个 0，两个 1，三个 5，一个 8，我们得到的最小的数就是 10015558。

现给定数字，请编写程序输出能够组成的最小的数。
输入格式：

输入在一行中给出 10 个非负整数，顺序表示我们拥有数字 0、数字 1、……数字 9 的个数。整数间用一个空格分隔。10 个数字的总个数不超过 50，且至少拥有 1 个非 0 的数字。
输出格式：

在一行中输出能够组成的最小的数。
*/

// @Author:longyan
// @Date:2022/6/20

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> elem;
	int number;
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		elem.push_back(number);
	}
	if (elem[1] != 0)
	{
		cout << "1";
		elem[1]--;
	}
	else if (elem[2] != 0)
	{
		cout << "2";
		elem[2]--;
	}
	else if (elem[3] != 0)
	{
		cout << "3";
		elem[3]--;
	}
	else if (elem[4] != 0)
	{
		cout << "4";
		elem[4]--;
	}
	else if (elem[5] != 0)
	{
		cout << "5";
		elem[5]--;
	}
	else if (elem[6] != 0)
	{
		cout << "6";
		elem[6]--;
	}
	else if (elem[7] != 0)
	{
		cout << "7";
		elem[7]--;
	}
	else if (elem[8] != 0)
	{
		cout << "8";
		elem[8]--;
	}
	else if (elem[9] != 0)
	{
		cout << "9";
		elem[9]--;
	}

	for (auto i = 0; i < elem[0]; i++)
	{
		cout << "0";
	}

	for (auto i = 1; i < 10; i++)
	{
		if (elem[i] != 0)
		{
			for (auto j = 0; j < elem[i]; j++)
			{
				cout << i;
			}
		}
	}

	cout << endl;
	return 0;
}
