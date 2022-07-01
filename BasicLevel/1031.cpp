/*
一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：

首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：

Z：0 1 2 3 4 5 6 7 8 9 10
M：1 0 X 9 8 7 6 5 4 3 2
现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。

输入格式：
输入第一行给出正整数N（≤100）是输入的身份证号码的个数。随后N行，每行给出1个18位身份证号码。

输出格式：
按照输入的顺序每行输出1个有问题的身份证号码。这里并不检验前17位是否合理，只检查前17位是否全为数字且最后1位校验码计算准确。如果所有号码都正常，则输出All passed。
*/

// @Author:longyan
// @Date:2022/7/1

#include <iostream>
#include <string>
#include <cstdbool>

using namespace std;

bool falseId(string id)
{
	int weight[17] = {
		7,
		9,
		10,
		5,
		8,
		4,
		2,
		1,
		6,
		3,
		7,
		9,
		10,
		5,
		8,
		4,
		2,
	};
	int z = 0;
	char m;
	int sum = 0;
	for (int i = 0; i < 17; i++)
	{
		if (id[i] < '0' || id[i] > '9')
		{
			return false;
		}
		sum += (id[i] - '0') * weight[i];
	}
	z = sum % 11;
	switch (z)
	{
	case 0:
		m = '1';
		break;
	case 1:
		m = '0';
		break;
	case 2:
		m = 'X';
		break;
	case 3:
		m = '9';
		break;
	case 4:
		m = '8';
		break;
	case 5:
		m = '7';
		break;
	case 6:
		m = '6';
		break;
	case 7:
		m = '5';
		break;
	case 8:
		m = '4';
		break;
	case 9:
		m = '3';
		break;
	case 10:
		m = '2';
		break;
	default:
		break;
	}
	if (m != id[17])
	{
		return false;
	}
	return true;
}

int main()
{
	const int Maxn = 101;
	int n;
	string id[Maxn];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> id[i];
	}

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (falseId(id[i]) == false)
		{
			cout << id[i] << endl;
			cnt++;
		}
	}

	if (cnt == 0)
		cout << "All passed" << endl;

	return 0;
}
