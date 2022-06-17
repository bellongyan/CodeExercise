/*
给定任一个各位数字不完全相同的 4 位正整数，如果我们先把 4 个数字按非递增排序，再按非递减排序，然后用第 1 个数字减第 2 个数字，
将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的 6174，这个神奇的数字也叫 Kaprekar 常数。

例如，我们从6767开始，将得到

7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...

现给定任意 4 位正整数，请编写程序演示到达黑洞的过程。
输入格式：
输入给出一个 (0,104) 区间内的正整数 N。
输出格式：
如果 N 的 4 位数字全相等，则在一行内输出 N - N = 0000；否则将计算的每一步在一行内输出，直到 6174 作为差出现，输出格式见样例。
注意每个数字按 4 位数格式输出。
*/

// @Author:longyan
// @Date:2022/6/17

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> MaxToMin(vector<int> a)
{
	vector<int> b;
	partial_sort(a.begin(), a.end(), a.end());
	for (int i : a)
	{
		b.push_back(i);
	}
	return b;
}
int main()
{
	int num;
	cin >> num;
	int final = num;
	int a, b, c, d;
	a = num % 10;
	num /= 10;
	b = num % 10;
	num /= 10;
	c = num % 10;
	num /= 10;
	d = num;
	int answer = -1;

	if (a == b && a == c && a == d)
	{
		printf("%04d - %04d = 0000\n", final, final);
	}
	else
	{
		while (answer != 6174)
		{
			vector<int> q;
			q.push_back(a);
			q.push_back(b);
			q.push_back(c);
			q.push_back(d);
			vector<int> test = MaxToMin(q);
			int max = -1, semax = -1, semin = -1, min = -1;
			max = test.back();
			test.pop_back();
			semax = test.back();
			test.pop_back();
			semin = test.back();
			test.pop_back();
			min = test.back();
			test.pop_back();

			int first = max * 1000 + semax * 100 + semin * 10 + min;
			int seconde = min * 1000 + semin * 100 + semax * 10 + max;
			answer = first - seconde;
			printf("%04d - %04d = %04d\n", first, seconde, answer);

			a = answer % 10;
			answer /= 10;
			b = answer % 10;
			answer /= 10;
			c = answer % 10;
			answer /= 10;
			d = answer;

			answer = first - seconde;
		}
	}

	return 0;
}
