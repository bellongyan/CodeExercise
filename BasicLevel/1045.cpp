/*
著名的快速排序算法里有一个经典的划分过程：我们通常采用某种方法取一个元素作为主元，通过交换，把比主元小的元素放到它的左边，比主元大的元素放到它的右边。 给定划分后的 N 个互不相同的正整数的排列，请问有多少个元素可能是划分前选取的主元？

例如给定 N=5, 排列是1、3、2、4、5。则：

	1 的左边没有元素，右边的元素都比它大，所以它可能是主元；
	尽管 3 的左边元素都比它小，但其右边的 2 比它小，所以它不能是主元；
	尽管 2 的右边元素都比它大，但其左边的 3 比它大，所以它不能是主元；
	类似原因，4 和 5 都可能是主元。

因此，有 3 个元素可能是主元。
输入格式：

输入在第 1 行中给出一个正整数 N（≤105）； 第 2 行是空格分隔的 N 个不同的正整数，每个数不超过 109。
输出格式：

在第 1 行中输出有可能是主元的元素个数；在第 2 行中按递增顺序输出这些元素，其间以 1 个空格分隔，行首尾不得有多余空格。
*/

// @Author:longyan
// @Date:2022/7/20

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	const int Maxn = 100000;
	int n;
	cin >> n;
	int list[Maxn] = {0};
	for (int i = 0; i < n; i++)
		cin >> list[i];

	int cnt = 0;
	int mlist[Maxn] = {0};
	for (int i = 0; i < n; i++)
	{
		int mcnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				j++;
			if (i < j && list[i] > list[j])
				break;
			if (i > j && list[i] < list[j])
				break;
			mcnt++;
		}
		if (mcnt == n - 1)
		{
			cnt++;
			mlist[i] = list[i];
		}
	}

	sort(mlist, mlist + n);

	cout << cnt << endl;
	int bcnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (mlist[i] != 0)
		{
			cout << mlist[i];
			bcnt++;
			if (bcnt != cnt)
				cout << " ";
			else
				cout << endl;
		}
	}

	return 0;
}
