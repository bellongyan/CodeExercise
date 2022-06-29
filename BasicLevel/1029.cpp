/*
旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉的那些键。

输入格式：
输入在 2 行中分别给出应该输入的文字、以及实际被输入的文字。每段文字是不超过 80 个字符的串，由字母 A-Z（包括大、小写）、数字 0-9、以及下划线 _（代表空格）组成。题目保证 2 个字符串均非空。

输出格式：
按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键只输出一次。题目保证至少有 1 个坏键。
*/

// @Author:longyan
// @Date:2022/6/29

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string input("");
	string test("");
	cin >> input >> test;

	string lost("");
	int i = 0;
	while (i < input.length())
	{
		if (test.find(input[i]) == string::npos && lost.find(toupper(input[i])) == string::npos)
		{
			lost += toupper(input[i]);
		}
		i++;
	}

	cout << lost << endl;

	return 0;
}
