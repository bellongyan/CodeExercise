/*
对于给定的正整数N，求它的位数及其各位数字之和。

输入格式：
输入在一行中给出一个不超过10 
9
 的正整数N。

输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。
*/

// @Author:longyan
// @Date:2022/5/8

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int count = 1;
    int sum = 0;
    if (n < 10)
        sum += n;
    while (n / 10 != 0)
    {
        int ret = n % 10;
        sum += ret;
        count++;
        n = n / 10;
        if (n / 10 == 0)
            sum += n;
    }
    printf("%d %d", count, sum);

    return 0;
}
