/*
1003 我要通过！ (20 分)
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入格式：
每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (≤10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。

输出格式：
每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。
*/

// @Author:longyan
// @Date:2022/4/21

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100];
    char *p, *t;
    int num;
    int count;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        count = 0;
        scanf("%s", s);

        // Get the character locations of "P" and "T"
        p = strchr(s, 'P');
        t = strchr(s, 'T');
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == 'P' || s[j] == 'T')
            {
                count++;
            }
            if (s[j] != 'P' && s[j] != 'T' && s[j] != 'A')
            {
                count = 100;
            }
        }
        if (count > 2 || t - p == 1)
        {
            printf("NO\n");
        }
        else if (p == s && t == &s[strlen(s) - 1])
        {
            printf("YES\n");
        }
        else if ((p - s) * (t - p - 1) == (&s[strlen(s) - 1] - t))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
