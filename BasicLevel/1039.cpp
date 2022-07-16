/*
小红想买些珠子做一串自己喜欢的珠串。卖珠子的摊主有很多串五颜六色的珠串，但是不肯把任何一串拆散了卖。于是小红要你帮忙判断一下，某串珠子里是否包含了全部自己想要的珠子？如果是，那么告诉她有多少多余的珠子；如果不是，那么告诉她缺了多少珠子。

为方便起见，我们用[0-9]、[a-z]、[A-Z]范围内的字符来表示颜色。例如在图1中，第3串是小红想做的珠串；那么第1串可以买，因为包含了全部她想要的珠子，还多了8颗不需要的珠子；第2串不能买，因为没有黑色珠子，并且少了一颗红色的珠子。

figbuy.jpg

图 1
输入格式：

每个输入包含 1 个测试用例。每个测试用例分别在 2 行中先后给出摊主的珠串和小红想做的珠串，两串都不超过 1000 个珠子。
输出格式：

如果可以买，则在一行中输出 Yes 以及有多少多余的珠子；如果不可以买，则在一行中输出 No 以及缺了多少珠子。其间以 1 个空格分隔。
*/

// @Author:longyan
// @Date:2022/7/16

#include <iostream>

using namespace std;

int word[256];
int main()
{
	string p, b;
	cin >> p >> b;

	for (auto i : p)
		word[i]++;
	int result = 0;
	for (auto i : b)
	{
		if (word[i] > 0)
			word[i]--;
		else
			result++;
	}

	if (result != 0)
		cout << "No " << result << endl;
	else
		cout << "Yes " << p.length() - b.length() << endl;

	return 0;
}
