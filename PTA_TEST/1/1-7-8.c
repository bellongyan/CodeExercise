/*
7-9 高速公路超速处罚 (5 分)
按照规定，在高速公路上行使的机动车，达到或超出本车道限速的10%则处200元罚款；若达到或超出50%，就要吊销驾驶证。
请编写程序根据车速和限速自动判别对该机动车的处理。

输入格式:
输入在一行中给出2个正整数，分别对应车速和限速，其间以空格分隔。

输出格式:
在一行中输出处理意见：若属于正常行驶，则输出“OK”；若应处罚款，则输出“Exceed x%. Ticket 200”；
若应吊销驾驶证，则输出“Exceed x%. License Revoked”。其中x是超速的百分比，精确到整数。
*/

// Author:longyan
// Date:2022/4/16

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int speed;
    int limit;
    double exceed;

    scanf("%d%d", &speed, &limit);
    exceed = (speed - limit) * 100.0 / limit;

    if (exceed < 10)
    {
        printf("OK\n");
    }
    else if (exceed < 50)
    {
        printf("Exceed %.0lf%%. Ticket 200\n", exceed);
    }
    else
    {
        printf("Exceed %.0lf%%. License Revoked\n", exceed);
    }

    return 0;
}