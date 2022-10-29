/*
  如果两个整数各位数字的和是一样的，则被称为是“朋友数”，而那个公共的和就是它们的“朋友证号”。例如 123 和 51 就是朋友数，因为 1+2+3 = 5+1 = 6，而 6 就是它们的朋友证号。给定一些整数，要求你统计一下它们中有多少个不同的朋友证号。
  
  输入格式：
  输入第一行给出正整数 N。随后一行给出 N 个正整数，数字间以空格分隔。题目保证所有数字小于 10^4。
  
  输出格式：
  首先第一行输出给定数字中不同的朋友证号的个数；随后一行按递增顺序输出这些朋友证号，数字间隔一个空格，且行末不得有多余空格。
 */

// @Author:longyan
// @Date:2022/10/25

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int numSum[1000] = {0};
	int friendTimes[500] = {0};
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (char j : s)
		{
			numSum[i] += j - '0';
		}
		friendTimes[numSum[i]]++;
	}
	
	int cnt = 0;
	for (int i : friendTimes)
		if (i != 0)
			cnt++;
	
	cout << cnt << endl;
	for (int i = 0; i < 500; i++)
	{
		if (friendTimes[i] != 0)
		{
			if (cnt == 1)
				cout << i << endl;
			else
				cout << i << " ";
			cnt--;
		}
	}
	return 0;
}
