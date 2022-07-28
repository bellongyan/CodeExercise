/*
本题要求将给定的 N 个正整数按非递增的顺序，填入“螺旋矩阵”。所谓“螺旋矩阵”，是指从左上角第 1 个格子开始，按顺时针螺旋方向填充。要求矩阵的规模为 m 行 n 列，满足条件：m×n 等于 N；m≥n；且 m−n 取所有可能值中的最小值。

输入格式：
输入在第 1 行中给出一个正整数 N，第 2 行给出 N 个待填充的正整数。所有数字不超过 10^4 ，相邻数字以空格分隔。

输出格式：
输出螺旋矩阵。每行 n 个数字，共 m 行。相邻数字以 1 个空格分隔，行末不得有多余空格。
*/

// @Author:longyan
// @Date:2022/7/28

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

bool cmp(int a, int b) { return a > b; }
int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    int m, n;
    for (n = sqrt(N); n >= 1; n--)
    {
        if (N % n == 0)
        {
            m = N / n;
            break;
        }
    }

    sort(a.begin(), a.end(), cmp);

    // 核心代码，按顺时针方向填充螺旋矩阵
    int t = 0;
    vector<vector<int>> b(m, vector<int>(n));
    int level = m / 2 + m % 2; // 层数
    for (int i = 0; i < level; i++)
    {
        for (int j = i; j <= n - 1 - i && t <= N - 1; j++) // 向右填充
            b[i][j] = a[t++];
        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++) // 向下填充
            b[j][n - 1 - i] = a[t++];
        for (int j = n - i - 1; j >= i && t <= N - 1; j--) // 向左填充
            b[m - 1 - i][j] = a[t++];
        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--) // 向上填充
            b[j][i] = a[t++];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j];
            if (j != n - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
