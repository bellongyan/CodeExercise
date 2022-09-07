/*
在不打扰居民的前提下，统计住房空置率的一种方法是根据每户用电量的连续变化规律进行判断。判断方法如下：

在观察期内，若存在超过一半的日子用电量低于某给定的阈值 e，则该住房为“可能空置”；

若观察期超过某给定阈值 D 天，且满足上一个条件，则该住房为“空置”。

现给定某居民区的住户用电量数据，请你统计“可能空置”的比率和“空置”比率，即以上两种状态的住房占居民区住房总套数的百分比。

输入格式：
输入第一行给出正整数 N（≤1000），为居民区住房总套数；正实数 e，即低电量阈值；正整数 D，即观察期阈值。随后 N 行，每行按以下格式给出一套住房的用电量数据：K E_1 E_2 ... E_K​

其中 K 为观察的天数，E_i 为第 i 天的用电量。

输出格式：
在一行中输出“可能空置”的比率和“空置”比率的百分比值，其间以一个空格分隔，保留小数点后 1 位。
*/

// @Author:longyan
// @Date:2022/8/29

#include <iostream>

using namespace std;

int main()
{
	int n, d, k, maybe = 0, must = 0;
	double e, temp;
	cin >> n >> e >> d;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		int sum = 0;
		for (int j = 0; j < k; j++)
		{
			cin >> temp;
			if (temp < e)
				sum++;
		}
		if (sum > (k / 2))
		{
			k > d ? must++ : maybe++;
		}
	}
	double mayberesult = (double)maybe / n * 100;
	double mustresult = (double)must / n * 100;
	printf("%.1f%% %.1f%%", mayberesult, mustresult);
	return 0;
}
