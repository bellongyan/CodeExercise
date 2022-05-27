/*
给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：

    A1​ = 能被 5 整除的数字中所有偶数的和；
    A2​ = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1​−n2​+n3​−n4​⋯；
    A3​ = 被 5 除后余 2 的数字的个数；
    A4​ = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
    A5​ = 被 5 除后余 4 的数字中最大数字。

输入格式：
每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。

输出格式：
对给定的 N 个正整数，按题目要求计算 A1​~A5​ 并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若分类之后某一类不存在数字，则在相应位置输出 N。
*/

// @Author:longyan
// @Date:2022/5/27

#include <iostream>
#include <vector>

using namespace std;

void A1(vector<int> A)
{
    vector<int> out;
    int s = 0;
    while (!A.empty())
    {
        int a = A.back();
        A.pop_back();

        if (a % 5 == 0 && a % 2 == 0)
        {
            out.push_back(a);
        }
    }
    if (out.empty())
    {
        cout << "N ";
    }
    else
    {
        while (!out.empty())
        {
            s += out.back();
            out.pop_back();
        }
        cout << s << " ";
    }
}

void A2(vector<int> B)
{
    vector<int> out;
    int s = 0;
    int sign = -1;
    while (!B.empty())
    {
        int a = B.back();
        B.pop_back();

        if (a % 5 == 1)
        {
            out.push_back(a);
        }
    }
    if (out.empty())
    {
        cout << "N ";
    }
    else
    {
        while (!out.empty())
        {
            sign = -1 * sign;
            s += sign * out.back();
            out.pop_back();
        }
        cout << s << " ";
    }
}

void A3(vector<int> C)
{
    vector<int> out;
    int cnt = 0;
    while (!C.empty())
    {
        int a = C.back();
        C.pop_back();

        if (a % 5 == 2)
        {
            out.push_back(a);
            cnt++;
        }
    }
    if (out.empty())
    {
        cout << "N ";
    }
    else
    {
        cout << cnt << " ";
    }
}

void A4(vector<int> D)
{
    vector<int> out;
    int sum = 0, cnt = 0;
    while (!D.empty())
    {
        int a = D.back();
        D.pop_back();

        if (a % 5 == 3)
        {
            sum += a;
            cnt++;
            out.push_back(a);
        }
    }
    if (out.empty())
    {
        cout << "N ";
    }
    else
    {
        printf("%.1lf ", 1.0 * sum / cnt);
    }
}

void A5(vector<int> E)
{
    vector<int> out;
    int max = -1;
    while (!E.empty())
    {
        int a = E.back();
        E.pop_back();

        if (a % 5 == 4)
        {
            out.push_back(a);
        }
    }
    if (out.empty())
    {
        cout << "N";
    }
    else
    {
        while (!out.empty())
        {
            int b = out.back();
            if (max < b)
                max = b;
            out.pop_back();
        }
        cout << max;
    }
}

int main()
{
    const int MAXN = 1000;
    int n;
    cin >> n;
    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }
    A1(num);
    A2(num);
    A3(num);
    A4(num);
    A5(num);

    return 0;
}
