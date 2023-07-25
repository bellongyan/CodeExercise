/*
  C 语言竞赛是浙江大学计算机学院主持的一个欢乐的竞赛。既然竞赛主旨是为了好玩，颁奖规则也就制定得很滑稽：

  0、冠军将赢得一份“神秘大奖”（比如很巨大的一本学生研究论文集……）。
  1、排名为素数的学生将赢得最好的奖品 —— 小黄人玩偶！
  2、其他人将得到巧克力。
  给定比赛的最终排名以及一系列参赛者的 ID，你要给出这些参赛者应该获得的奖品。

  输入格式：
  输入第一行给出一个正整数 N（≤10^4），是参赛者人数。随后 N 行给出最终排名，每行按排名顺序给出一位参赛者的 ID（4 位数字组成）。接下来给出一个正整数 K 以及 K 个需要查询的 ID。

  输出格式：
  对每个要查询的 ID，在一行中输出 ID: 奖品，其中奖品或者是 Mystery Award（神秘大奖）、或者是 Minion（小黄人）、或者是 Chocolate（巧克力）。如果所查 ID 根本不在排名里，打印 Are you kidding?（耍我呢？）。如果该 ID 已经查过了（即奖品已经领过了），打印 ID: Checked（不能多吃多占）。
 */

// @Author:longyan
// @Date:2022/10/15

#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int ran[10000];

bool isprime(int n)
{
	if (n == 2 || n == 3)
		return true;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int id;
		scanf("%d", &id);
		ran[id] = i + 1;
	}
	scanf("%d", &k);
	set<int> ss;
	for (int i = 0; i < k; i++)
	{
		int id;
		scanf("%d", &id);
		printf("%04d: ", id);
		if (ran[id] == 0)
		{
			printf("Are you kidding?\n");
			continue;
		}
		if (ss.find(id) == ss.end())
		{
			ss.insert(id);
		}
		else
		{
			printf("Checked\n");
			continue;
		}
		if (ran[id] == 1)
		{
			printf("Mystery Award\n");
		}
		else if (isprime(ran[id]))
		{
			printf("Minion\n");
		}
		else
		{
			printf("Chocolate\n");
		}
	}
	return 0;
}
