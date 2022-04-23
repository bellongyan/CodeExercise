/*
 * @Author: longyan
 * @Date: 2022-04-24 00:50:22
 */

/*
1006 换个格式输出整数 (15 分)
让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。
例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。

输入格式：
每个测试输入包含 1 个测试用例，给出正整数 n（<1000）。

输出格式：
每个测试用例的输出占一行，用规定的格式输出 n。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int b = n / 100;
    int g = n % 10 % 10;
    int s = n / 10 % 10;
    for (int i = 0; i < b; i++)
    {
        printf("B");
    }
    for (int i = 0; i < s; i++)
    {
        printf("S");
    }
    for (int i = 1; i < g + 1; i++)
    {
        printf("%d", i);
    }

    return 0;
}
