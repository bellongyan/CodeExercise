/*
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：￼
现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。
输入格式：
输入第 1 行给出正整数 N（≤105），即双方交锋的次数。随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。
C 代表“锤子”、J 代表“剪刀”、B 代表“布”，第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。
输出格式：
输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。
第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。如果解不唯一，则输出按字母序最小的解。
 */

// @Author:longyan
// @Date:2022/6/17

#include <iostream>
#include <string>

using namespace std;
int winer(string a, string b)
{
	//	0表示a输了b，1表示a赢了b，2表示a和b平了
	int result = -1;
	if (a == "C")
	{
		if (b == "C")
		{
			result = 2;
		}
		else if (b == "J")
		{
			result = 1;
		}
		else
			result = 0;
	}
	else if (a == "J")
	{
		if (b == "C")
		{
			result = 0;
		}
		else if (b == "J")
		{
			result = 2;
		}
		else
			result = 1;
	}
	else
	{
		if (b == "C")
		{
			result = 1;
		}
		else if (b == "J")
		{
			result = 0;
		}
		else
			result = 2;
	}
	return result;
}

int main()
{
	int n;
	cin >> n;

	string A, B;

	int win = 0, same = 0, loss = 0;
	int a_b = 0, a_c = 0, a_j = 0;
	int b_b = 0, b_c = 0, b_j = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> A >> B;
		if (winer(A, B) == 1)
		{
			win++;
			if (A == "B")
			{
				a_b++;
			}
			else if (A == "C")
			{
				a_c++;
			}
			else
				a_j++;
		}
		else if (winer(A, B) == 2)
		{
			same++;
		}
		else
		{
			loss++;
			if (B == "B")
			{
				b_b++;
			}
			else if (B == "C")
			{
				b_c++;
			}
			else
				b_j++;
		}
	}
	printf("%d %d %d\n%d %d %d\n", win, same, loss, loss, same, win);
	if (a_b >= a_c && a_b >= a_j)
	{
		printf("B");
		if (b_b >= b_c && b_b >= b_j)
		{
			printf(" B\n");
		}
		else if (b_c > b_b && b_c >= b_j)
		{
			printf(" C\n");
		}
		else
		{
			printf(" J\n");
		}
	}
	else if (a_c > a_b && a_c >= a_j)
	{
		printf("C");
		if (b_b >= b_c && b_b >= b_j)
		{
			printf(" B\n");
		}
		else if (b_c > b_b && b_c >= b_j)
		{
			printf(" C\n");
		}
		else
		{
			printf(" J\n");
		}
	}
	else
	{
		printf("J");
		if (b_b >= b_c && b_b >= b_j)
		{
			printf(" B\n");
		}
		else if (b_c > b_b && b_c >= b_j)
		{
			printf(" C\n");
		}
		else
		{
			printf(" J\n");
		}
	}

	return 0;
}
