/*
本题要求根据火车的出发时间和达到时间，编写程序计算整个旅途所用的时间。

输入格式：
输入在一行中给出2个4位正整数，其间以空格分隔，分别表示火车的出发时间和到达时间。每个时间的格式为2位小时数（00-23）和2位分钟数（00-59），假设出发和到达在同一天内。

输出格式：
在一行输出该旅途所用的时间，格式为“hh:mm”，其中hh为2位小时数、mm为2位分钟数。
*/

// Author:longyan
// Date:2022/4/15

#include <stdio.h>
int main()
{
    int start_time, arrive_time;
    scanf("%d%d", &start_time, &arrive_time);

    int start_hh = start_time / 100;
    int arrive_hh = arrive_time / 100;

    int start_mm = start_time % 100;
    int arrive_mm = arrive_time % 100;

    int hh = arrive_hh - start_hh;
    int mm = arrive_mm - start_mm;

    if (mm < 0)
    {
        mm = (arrive_mm + 60 - start_mm);
        hh = hh - 1;
    }

    printf("%02d:%02d", hh, mm);

    return 0;
}