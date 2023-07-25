/*
某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。
这里确保每个输入的日期都是合法的，但不一定是合理的——假设已知镇上没有超过 200 岁的老人，而今天是 2014 年 9 月 6 日，所以超过 200 岁的生日和未出生的生日都是不合理的，应该被过滤掉。

输入格式：
输入在第一行给出正整数 N，取值在(0,105]；随后 N 行，每行给出 1 个人的姓名（由不超过 5 个英文字母组成的字符串）、以及按 yyyy/mm/dd（即年/月/日）格式给出的生日。题目保证最年长和最年轻的人没有并列。

输出格式：
在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。
*/

// @Author:longyan
// @Date:2022/6/28

#include <iostream>
#include <string>

using namespace std;

struct people
{
	string name;
	string birthday;
};

int main()
{
	int N;
	cin >> N;
	int cnt = 0;

	string MaxName(""), MinName("");
	string MaxBirthday = "1814/09/06";
	string MinBirthday = "2014/09/06";
	for (int i = 0; i < N; i++)
	{
		people person;
		cin >> person.name >> person.birthday;
		if (person.birthday >= "1814/09/06" && person.birthday <= "2014/09/06")
		{
			cnt++;
			if (person.birthday >= MaxBirthday)
			{
				MaxBirthday = person.birthday;
				MaxName = person.name;
			}
			if (person.birthday <= MinBirthday)
			{
				MinBirthday = person.birthday;
				MinName = person.name;
			}
		}
	}

	cout << cnt;
	if (cnt != 0)
	{
		cout << " " << MinName << " " << MaxName << endl;
	}

	return 0;
}
