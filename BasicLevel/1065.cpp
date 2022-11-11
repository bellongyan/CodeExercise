/*
  “单身狗”是中文对于单身人士的一种爱称。本题请你从上万人的大型派对中找出落单的客人，以便给予特殊关爱。
  
  输入格式：
  输入第一行给出一个正整数 N（≤ 50 000），是已知夫妻/伴侣的对数；随后 N 行，每行给出一对夫妻/伴侣——为方便起见，每人对应一个 ID 号，为 5 位数字（从 00000 到 99999），ID 间以空格分隔；之后给出一个正整数 M（≤ 10 000），为参加派对的总人数；随后一行给出这 M 位客人的 ID，以空格分隔。题目保证无人重婚或脚踩两条船。
  
  输出格式：
  首先第一行输出落单客人的总人数；随后第二行按 ID 递增顺序列出落单的客人。ID 间用 1 个空格分隔，行的首尾不得有多余空格。
*/

// @Author:longyan
// @Date:2022/11/11

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int a[100000], b[10000] = {0}, c[100000] = {0}; // a[]按ID记录配偶, b[]是出场名单， c[]按ID记录出场

int main()
{
	int n, m, cnt = 0, t1, t2;
	memset(a, -1, sizeof(a));

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t1 >> t2;
		a[t1] = t2;
		a[t2] = t1;
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		c[b[i]] = 1;
	}

	sort(b, b + m);
	for (int i = 0; i < m; i++)
		if (c[a[b[i]]] == 0 || a[b[i]] == -1)
			cnt++;
	cout << cnt << endl;

	for (int i = 0, flag = 0; i < m; i++)
		if (c[a[b[i]]] == 0 || a[b[i]] == -1)
			flag ? printf(" %05d", b[i]) : flag = printf("%05d", b[i]);

	return 0;
}
