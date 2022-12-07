/*
  要将一条直径至少为 1 个单位的长管道水平送入地形复杂的岩洞中，究竟是否可能？下面的两幅图分别给出了岩洞的剖面图，深蓝色的折线勾勒出岩洞顶部和底部的轮廓。图 1 是有可能的，绿色部分显示直径为 1 的管道可以送入。图 2 就不可能，除非把顶部或底部的突出部分削掉 1 个单位的高度。

  fig.JPG

  本题就请你编写程序，判断给定的岩洞中是否可以施工。

  输入格式：
  输入在第一行给出一个不超过 100 的正整数 N，即横向采样的点数。随后两行数据，从左到右顺次给出采样点的纵坐标：第 1 行是岩洞顶部的采样点，第 2 行是岩洞底部的采样点。这里假设坐标原点在左下角，每个纵坐标为不超过 1000 的非负整数。同行数字间以空格分隔。

  题目保证输入数据是合理的，即岩洞底部的轮廓线不会与顶部轮廓线交叉。

  输出格式：
  如果可以直接施工，则在一行中输出 Yes 和可以送入的管道的最大直径；如果不行，则输出 No 和至少需要削掉的高度。答案和数字间以 1 个空格分隔。
 */

// @Author:longyan
// @Date:2022/12/8

#include <iostream>

const int MAXN = 101;
int main()
{
	int N;
	std::cin >> N;

	int top[MAXN] = {0}, down[MAXN] = {0};
	int topMin = 1001, downMax = -1;
	for (int i = 0; i < N; i++)
	{
		std::cin >> top[i];
		if (top[i] < topMin)
		{
			topMin = top[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		std::cin >> down[i];
		if (down[i] > downMax)
		{
			downMax = down[i];
		}
	}

	if ((topMin - downMax) > 0)
	{
		std::cout << "Yes " << topMin - downMax << std::endl;
	}
	else
	{
		std::cout << "No " << downMax + 1 - topMin << std::endl;
	}

	return 0;
}
