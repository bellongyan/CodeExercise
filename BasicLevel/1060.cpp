/*
  英国天文学家爱丁顿很喜欢骑车。据说他为了炫耀自己的骑车功力，还定义了一个“爱丁顿数” E ，即满足有 E 天骑车超过 E 英里的最大整数 E。据说爱丁顿自己的 E 等于87。
  
  现给定某人 N 天的骑车距离，请你算出对应的爱丁顿数 E（≤N）。
  
  输入格式：
  输入第一行给出一个正整数 N (≤10……w5)，即连续骑车的天数；第二行给出 N 个非负整数，代表每天的骑车距离。
  
  输出格式：
  在一行中给出 N 天的爱丁顿数。
 */

// @Author:longyan
// @Date:2022/10/23

#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int mile[10000] = {0};
	set<int> number;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		mile[i] = m;
		number.insert(m);
	}
	
	int answer[1000]={0};
	for (int i : number)
	{
		int cnt = 0;
		for (int j = 0; mile[j] != 0; j++)
		{
			if (mile[j] > i)
				cnt++;
		}
		answer[i] = cnt;
	}
	
	int max = -1;
	for (int i = 0; i < 1000; i++)
	{
		if (answer[i] >= i && i > max)
		{
			max = i;
		}
	}
	
	cout << max;
	return 0;
}
