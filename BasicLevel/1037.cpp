/*
如果你是哈利·波特迷，你会知道魔法世界有它自己的货币系统 —— 就如海格告诉哈利的：“十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可，很容易。”现在，给定哈利应付的价钱 P 和他实付的钱 A，你的任务是写一个程序来计算他应该被找的零钱。

输入格式：
输入在 1 行中分别给出 P 和 A，格式为 Galleon.Sickle.Knut，其间用 1 个空格分隔。这里 Galleon 是 [0, 10^7] 区间内的整数，Sickle 是 [0, 17) 区间内的整数，Knut 是 [0, 29) 区间内的整数。

输出格式：
在一行中用与输入同样的格式输出哈利应该被找的零钱。如果他没带够钱，那么输出的应该是负数。
*/

// @Author:longyan
// @Date:2022/7/15

#include <iostream>

using namespace std;

int main()
{
	int pg, ps, pk, ag, as, ak;
	scanf("%d.%d.%d %d.%d.%d", &pg, &ps, &pk, &ag, &as, &ak);
	int psum = 0, asum = 0;
	psum = pk + 29 * (ps + 17 * pg);
	asum = ak + 29 * (as + 17 * ag);
	if (psum > asum)
	{
		cout << "-";
		int tg = pg, ts = ps, tk = pk;
		pg = ag, ps = as, pk = ak;
		ag = tg, as = ts, ak = tk;
	}
	int sg = ag - pg, ss = as - ps, sk = ak - pk;
	if (sk < 0)
	{
		ss--;
		sk += 29;
	}
	if (ss < 0)
	{
		sg--;
		ss += 17;
	}
	if (sg < 0)
		sg = (-1) * sg;

	cout << sg << "." << ss << "." << sk << endl;

	return 0;
}
