/*
本题要求编写程序，找出最高分。

输入格式:
输入在第一行中给出正整数n，即学生人数。第二行给出n个非负整数，即这n位学生的成绩，其间以空格分隔。

输出格式:
在一行中输出最高分
*/

// @Author:longyan
// @Date:2022/5/7

#include <stdio.h>
#define MAXN 1000
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int score[MAXN];
    int maxinum = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
        if (score[i] > maxinum)
            maxinum = score[i];
    }
    printf("%d", maxinum);
    return 0;
}
