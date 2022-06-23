/*
给定一个常数 K 以及一个单链表 L，请编写程序将 L 中每 K 个结点反转。例如：给定 L 为 1→2→3→4→5→6，K 为 3，则输出应该为 3→2→1→6→5→4；如果 K 为 4，则输出应该为 4→3→2→1→5→6，即最后不到 K 个元素不反转。

输入格式：
每个输入包含 1 个测试用例。每个测试用例第 1 行给出第 1 个结点的地址、结点总个数正整数 N (≤105)、以及正整数 K (≤N)，即要求反转的子链结点的个数。结点的地址是 5 位非负整数，NULL 地址用 −1 表示。
接下来有 N 行，每行格式为：
Address Data Next
其中 Address 是结点地址，Data 是该结点保存的整数数据，Next 是下一结点的地址。

输出格式：
对每个测试用例，顺序输出反转后的链表，其上每个结点占一行，格式与输入相同。
*/

// @Author:longyan
// @Date:2022/6/24

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct node
{
	string address, next_address;
	int data;
};

int cmp0(node a, node b)
{
	return a.data < b.data;
}

int cmp1(node a, node b)
{
	return a.data > b.data;
}

int main()
{
	vector<node> table;
	int n;
	int k;
	string address0;

	cin >> address0 >> n >> k;
	for (int i = 0; i < n; i++)
	{
		node temp;
		cin >> temp.address >> temp.data >> temp.next_address;

		table.push_back(temp);
	}

	sort(table.begin(), table.end(), cmp0);
	int quo;
	quo = n / k;
	for (int i = 0; i < quo; i++)
	{
		sort(table.begin() + quo * i, table.begin() + quo * i + k, cmp1);
	}

	for (int i = 0; i < table.size(); i++)
	{
		if (i != table.size() - 1)
		{
			string temp;
			temp = table[i + 1].address;
			table[i].next_address = temp;
		}
		else
		{
			table[i].next_address = "-1";
		}
		cout << table[i].address << " " << table[i].data << " " << table[i].next_address << endl;
	}

	return 0;
}

/*
00100 6 4

00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218

00100 1 12309
12309 2 33218
33218 3 00000
00000 4 99999
99999 5 68237
68237 6 -1

00000 4 99999
33218 3 00000
12309 2 33218
00100 1 12309
99999 5 68237
68236 6 -1

6 / 4 = 1
for 4
sort >

*/
