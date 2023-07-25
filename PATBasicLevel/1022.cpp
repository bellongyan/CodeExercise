/*
输入两个非负 10 进制整数 A 和 B (≤230−1)，输出 A+B 的 D (1<D≤10)进制数。
输入格式：

输入在一行中依次给出 3 个整数 A、B 和 D。
输出格式：

输出 A+B 的 D 进制数。
*/

// @Author:longyan
// @Date:2022/6/19

#include <iostream>
#include <vector>

using namespace std;

void BinaryConversion(int n, int d)
{
	vector<int> result;
	while (n / d != 0)
	{
		result.push_back(n % d);
		n /= d;
	}
	result.push_back(n);

	for (auto i = result.rbegin(); i != result.rend(); i++)
	{
		cout << *i;
	}
}

int main()
{
	int a, b, sum;
	int d;
	cin >> a >> b >> d;
	sum = a + b;
	BinaryConversion(sum, d);

	return 0;
}
