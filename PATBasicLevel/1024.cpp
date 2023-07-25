/*
科学计数法是科学家用来表示很大或很小的数字的一种方便的方法，其满足正则表达式 [+-][1-9].[0-9]+E[+-][0-9]+，即数字的整数部分只有 1 位，小数部分至少有 1 位，该数字及其指数部分的正负号即使对正数也必定明确给出。
现以科学计数法的格式给出实数 A，请编写程序按普通数字表示法输出 A，并保证所有有效位都被保留。

输入格式：
每个输入包含 1 个测试用例，即一个以科学计数法表示的实数 A。该数字的存储长度不超过 9999 字节，且其指数的绝对值不超过 9999。

输出格式：
对每个测试用例，在一行中按普通数字表示法输出 A，并保证所有有效位都被保留，包括末尾的 0。
*/

// @Author:longyan
// @Date:2022/6/20

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num;
	cin >> num;

	int n = 3;
	while (num[n] != 'E')
	{
		n++;
	}

	string k = "";
	for (auto i = num.length() - 2; i != num.length(); i++)
	{
		k = k + num[i];
	}
	float b = stof(k);

	if (num[0] == '-')
		cout << "-";

	if (num[num.length() - 3] == '-')
	{
		cout << "0.";
		for (int i = 0; i < b - 1; i++)
		{
			cout << "0";
		}
		cout << num[1];
		for (int i = 3; i < num.length(); i++)
		{
			if (num[i] != 'E')
			{
				cout << num[i];
			}
			else
				break;
		}
	}
	else
	{
		cout << num[1];
		if (n - 3 <= b)
		{
			for (int i = 3; i < num.length(); i++)
			{
				if (num[i] != 'E')
				{
					cout << num[i];
				}
				else
					break;
			}

			for (int i = 0; i < b - n + 3; i++)
			{
				cout << "0";
			}
		}
		else
		{
			for (int i = 3; i < b + 3; i++)
			{
				cout << num[i];
			}
			cout << ".";
			for (int i = b + 3; i < n; i++)
			{
				cout << num[i];
			}
		}
	}
	cout << endl;
	return 0;
}
