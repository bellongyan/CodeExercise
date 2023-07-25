/*
宋代史学家司马光在《资治通鉴》中有一段著名的“德才论”：“是故才德全尽谓之圣人，才德兼亡谓之愚人，德胜才谓之君子，才胜德谓之小人。凡取人之术，苟不得圣人，君子而与之，与其得小人，不若得愚人。”

现给出一批考生的德才分数，请根据司马光的理论给出录取排名。
输入格式：

输入第一行给出 3 个正整数，分别为：N（≤105），即考生总数；L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；H（<100），为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；才分不到但德分到优先录取线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。

随后 N 行，每行给出一位考生的信息，包括：准考证号 德分 才分，其中准考证号为 8 位整数，德才分为区间 [0, 100] 内的整数。数字间以空格分隔。
输出格式：

输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，每行按照输入格式输出一位考生的信息，考生按输入中说明的规则从高到低排序。当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。
输入样例：
*/

// @Author:longyan
// @Date:2022/5/30

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    int id;
    int score_de;
    int score_ca;
    int score_sum;
};

int cmp(struct Student &s1, struct Student &s2)
{
    if (s1.score_sum != s2.score_sum)
    {
        return s1.score_sum > s2.score_sum;
    }
    else if (s1.score_de != s2.score_de)
    {
        return s1.score_de > s2.score_de;
    }
    else
        return s1.id < s2.id;
}

int main()
{
    int N, L, H;
    cin >> N >> L >> H;
    vector<Student> students[4];
    Student temp;
    int t = N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp.id >> temp.score_de >> temp.score_ca;
        temp.score_sum = temp.score_de + temp.score_ca;

        if (temp.score_de < L || temp.score_ca < L)
            t--;
        else if (temp.score_de >= H && temp.score_ca >= H)
        {
            students[0].push_back(temp);
        }
        else if (temp.score_de >= H && temp.score_ca < H)
        {
            students[1].push_back(temp);
        }
        else if (temp.score_de < H && temp.score_ca < H && temp.score_de >= temp.score_ca)
        {
            students[2].push_back(temp);
        }
        else
        {
            students[3].push_back(temp);
        }
    }

    cout << t << endl;

    for (int i = 0; i < 4; i++)
    {
        sort(students[i].begin(), students[i].end(), cmp);
        for (int j = 0; j < students[i].size(); j++)
        {
            cout << students[i][j].id << " " << students[i][j].score_de << " " << students[i][j].score_ca << endl;
        }
    }

    return 0;
}
