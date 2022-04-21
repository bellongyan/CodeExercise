/*
中国有句俗语叫“三天打鱼两天晒网”。假设某人从某天起，开始“三天打鱼两天晒网”，问这个人在以后的第N天中是“打鱼”还是“晒网”？

输入格式：
输入在一行中给出一个不超过1000的正整数N。

输出格式：
在一行中输出此人在第N天中是“Fishing”（即“打鱼”）还是“Drying”（即“晒网”），并且输出“in day N”。
*/

// Author:longyan
// Date:2022/4/18

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int day;
    scanf("%d", &day);
    int ret = day % 5;
    if (ret == 0 || ret == 4)
    {
        printf("Drying in day %d", day);
    }
    else
    {
        printf("Fishing in day %d", day);
    }
    return 0;
}
