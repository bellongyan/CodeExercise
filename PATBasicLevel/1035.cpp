/*
根据维基百科的定义：

插入排序是迭代算法，逐一获得输入数据，逐步产生有序的输出序列。每步迭代中，算法从输入序列中取出一元素，将之插入有序序列中正确的位置。如此迭代直到全部元素有序。

归并排序进行如下迭代操作：首先将原始序列看成 N 个只包含 1 个元素的有序子序列，然后每次迭代归并两个相邻的有序子序列，直到最后只剩下 1 个有序的序列。

现给定原始序列和由某排序算法产生的中间序列，请你判断该算法究竟是哪种排序算法？

输入格式：
输入在第一行给出正整数 N (≤100)；随后一行给出原始序列的 N 个整数；最后一行给出由某排序算法产生的中间序列。这里假设排序的目标序列是升序。数字间以空格分隔。

输出格式：
首先在第 1 行中输出Insertion Sort表示插入排序、或Merge Sort表示归并排序；然后在第 2 行中输出用该排序算法再迭代一轮的结果序列。题目保证每组测试的结果是唯一的。数字间以空格分隔，且行首尾不得有多余空格。
*/

// @Author:longyan
// @Date:2022/7/13

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, a[100], b[100], i, j;

	// 数据输入
	// 原始数列的个数
	cin >> n;
	// 原始数列
	for (int i = 0; i < n; i++)
		cin >> a[i];
	// 中间序列
	for (int i = 0; i < n; i++)
		cin >> b[i];

	// 记录中间序列的正确顺序的最后一个位置
	for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);
	for (j = i + 1; a[j] == b[j] && j < n; j++);

	// 插入排序
	if (j == n) {
		cout << "Insertion Sort" << endl;
		sort(a, a + i + 2);
	}
	// 归并排序
	else {
		cout << "Merge Sort" << endl;
		int k = 1, flag = 1;
		while (flag) {
			flag = 0;
			for (i = 0; i < n; i++) {
				if (a[i] != b[i])
					flag = 1;
			}
			k = k * 2;
			for (i = 0; i < n / k; i++)
				sort(a + i * k, a + (i + 1) * k);
			sort(a + n / k * k, a + n);
		}
	}

	// 输出排序后的结果
	for (j = 0; j < n; j++) {
		if (j != 0) printf(" ");
		cout << a[j];
	}
	return 0;
}
