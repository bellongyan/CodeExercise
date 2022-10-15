/*
  给定一串长度不超过 10^5 的字符串，本题要求你将其中所有英文字母的序号（字母 a-z 对应序号 1-26，不分大小写）相加，得到整数 N，然后再分析一下 N 的二进制表示中有多少 0、多少 1。例如给定字符串 PAT (Basic)，其字母序号之和为：16+1+20+2+1+19+9+3=71，而 71 的二进制是 1000111，即有 3 个 0、4 个 1。

  输入格式：
  输入在一行中给出长度不超过 10^5、以回车结束的字符串。

  输出格式：
  在一行中先后输出 0 的个数和 1 的个数，其间以空格分隔。注意：若字符串中不存在字母，则视为 N 不存在，也就没有 0 和 1。
 */

// @Author:longyan
// @Date:2022/10/15

#include <iostream>
#include <cctype>

using namespace std;

// 获取字母的序号
int GetASCIIsub64(char x);

// 英文字母序号之和
int numSum(string n);

int main()
{
	string n;
	getline(cin, n);

	int sum = numSum(n);

	int s0 = 0, s1 = 0;

	for (; sum != 0;)
	{
		if (sum % 2 == 0)
			s0++;
		else
			s1++;
		sum = sum / 2;
	}

	cout << s0 << " " << s1 << endl;

	return 0;
}

// 获取字母的序号
int GetASCIIsub32(char x)
{
	return int(x - 64);
}

// 英文字母序号之和
int numSum(string n)
{
	string a = "";
	for (char i : n)
	{
		if (isalpha(i))
		{
			a += toupper(i);
		}
	}

	int sum = 0;

	for (char i : a)
	{
		sum += GetASCIIsub32(i);
	}

	return sum;
}
