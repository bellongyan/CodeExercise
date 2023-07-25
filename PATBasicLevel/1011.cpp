/*
给定区间 [−231,231] 内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。
输入格式：

输入第 1 行给出正整数 T (≤10)，是测试用例的个数。随后给出 T 组测试用例，每组占一行，顺序给出 A、B 和 C。整数间以空格分隔。
输出格式：

对每组测试用例，在一行中输出 Case #X: true 如果 A+B>C，否则输出 Case #X: false，其中 X 是测试用例的编号（从 1 开始）。
*/

// @Author:longyan
// @Date:2022/5/27

#include <iostream>
#include <stdbool.h>
using namespace std;

bool cal(long long int a, long long int b, long long int c)
{
    if (a + b > c)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        long long int a;
        long long int b;
        long long int c;
        cin >> a >> b >> c;

        if (cal(a, b, c))
        {
            cout << "Case #" << i + 1 << ": true" << endl;
        }
        else
        {
            cout << "Case #" << i + 1 << ": false" << endl;
        }
    }

    return 0;
}
