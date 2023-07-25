/*
1002 写出这个数 (20 分)
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
*/

// @Author:longyan
// @Date:2022/4/21

#include <iostream>

using namespace std;

int main()
{
    char s[100];
    char name[][10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int sum = 0;
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        sum += (s[i] - '0');
    }

    int asum[5];
    int j;
    for (j = 0; sum >= 10; j++)
    {
        asum[j] = sum % 10;
        sum /= 10;
    }
    asum[j] = sum;
    while (j >= 0)
    {
        if (j != 0)
        {
            printf("%s ", name[asum[j]]);
        }
        else
        {
            printf("%s\n", name[asum[j]]);
        }
        j--;
    }

    return 0;
}
