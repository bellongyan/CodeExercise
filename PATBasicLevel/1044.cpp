/*
火星人是以 13 进制计数的：

地球人的 0 被火星人称为 tret。
地球人数字 1 到 12 的火星文分别为：jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec。
火星人将进位以后的 12 个高位数字分别称为：tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou。
例如地球人的数字 29 翻译成火星文就是 hel mar；而火星文 elo nov 对应地球数字 115。为了方便交流，请你编写程序实现地球和火星数字之间的互译。

输入格式：
输入第一行给出一个正整数 N（<100），随后 N 行，每行给出一个 [0, 169) 区间内的数字 —— 或者是地球文，或者是火星文。

输出格式：
对应输入的每一行，在一行中输出翻译后的另一种语言的数字。
*/

// @Author:longyan
// @Date:2022/7/18

#include <iostream>
#include <cctype>
#include <map>

using namespace std;

void isDigit(string s, string ge[], string shi[]);
void isAlpha(string s, string shi[]);
int main()
{

	int n;
	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		string ge[] = {"jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
		string shi[] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

		if (isdigit(s[0]))
			isDigit(s, ge, shi);
		else if (isalpha(s[0]))
			isAlpha(s, shi);
	}

	return 0;
}

void isDigit(string s, string ge[], string shi[])
{
	int sum = 0;
	for (char c : s)
		sum = 10 * sum + c - '0';
	int quo = sum / 13, ret = sum % 13;
	if (quo != 0)
		cout << shi[quo - 1] << " " << ge[ret - 1] << endl;
	else if (quo == 0 && ret == 0)
		cout << "tret" << endl;
	else if (quo == 0)
		cout << ge[ret - 1] << endl;
	return;
}

void isAlpha(string s, string shi[])
{
	map<string, int> toInt;
	toInt["tret"] = 0, toInt["jan"] = 1, toInt["feb"] = 2, toInt["mar"] = 3, toInt["apr"] = 4, toInt["may"] = 5, toInt["jun"] = 6, toInt["jly"] = 7, toInt["aug"] = 8, toInt["sep"] = 9, toInt["oct"] = 10, toInt["nov"] = 11, toInt["dec"] = 12;
	toInt["tam"] = 1, toInt["hel"] = 2, toInt["maa"] = 3, toInt["huh"] = 4, toInt["tou"] = 5, toInt["kes"] = 6, toInt["hei"] = 7, toInt["elo"] = 8, toInt["syy"] = 9, toInt["lok"] = 10, toInt["mer"] = 11, toInt["jou"] = 12;
	string str1, str2 = "tret";
	if (s == "tret")
		cout << "0" << endl;
	if (s.length() > 3)
		str1 = s.substr(0, 3), str2 = s.substr(4, 6);
	else
		str1 = s.substr(0, 3);

	int sum = 0;
	if (s.length() <= 3)
	{
		int cnt = 0;
		for (int i = 0; i < 12; i++)
		{
			if (shi[i] == str1)
			{
				sum = 13 * toInt[shi[i]];
				cnt++;
			}
		}
		if (cnt == 12)
			cout << toInt[str1];
	}
	else
		sum = 13 * toInt[str1] + toInt[str2];

	cout << sum << endl;
}
