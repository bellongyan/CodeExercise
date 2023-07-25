/*
编程团体赛的规则为：每个参赛队由若干队员组成；所有队员独立比赛；参赛队的成绩为所有队员的成绩和；成绩最高的队获胜。

现给定所有队员的比赛成绩，请你编写程序找出冠军队。

输入格式：
输入第一行给出一个正整数 N（≤10
4
 ），即所有参赛队员总数。随后 N 行，每行给出一位队员的成绩，格式为：队伍编号-队员编号 成绩，其中队伍编号为 1 到 1000 的正整数，队员编号为 1 到 10 的正整数，成绩为 0 到 100 的整数。

输出格式：
在一行中输出冠军队的编号和总成绩，其间以一个空格分隔。注意：题目保证冠军队是唯一的。
*/

// @Author:longyan
// @Date:2022/7/22

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int score[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        int tN, pN, s;
        scanf("%d-%d %d", &tN, &pN, &s);
        score[tN] += s;
    }

    int index = 0, maxNum = score[0];

    for (int i = 1; i < 1000; i++)
    {
        if (score[i] > maxNum)
        {
            index = i;
            maxNum = score[i];
        }
    }

    cout << index << " " << maxNum << endl;

    return 0;
}
