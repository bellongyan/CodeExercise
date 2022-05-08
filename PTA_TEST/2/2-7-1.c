/*
本题要求编写程序，计算序列 1 + 2 + 3 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，请注意等号的左右各有一个空格。题目保证计算结果不超过长整型整数的范围。
*/

// @Author:longyan
// @Date:2022/5/7

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i < n + 1; i++)
    {
        sum += i;
    }
    printf("sum = %d", sum);
    
    return 0;
}
