/*
令 Pi​ 表示第 i 个素数。现任给两个正整数 M≤N≤104，请输出 PM​ 到 PN​ 的所有素数。

输入格式：
输入在一行中给出 M 和 N，其间以空格分隔。

输出格式：
输出从 PM​ 到 PN​ 的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。
*/

// @Author:longyan
// @Date:2022/5/27

#include <iostream>
#include <vector>
#include <stdbool.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int cnt = 0;
    int num = 2;
    vector<int> prime;
    while (cnt < n)
    {
        if (isPrime(num))
        {
            cnt++;
            if (cnt >= m)
                prime.push_back(num);
        }
        num++;
    }
    cnt = 0;
    for (int i = 0; i < prime.size(); i++)
    {
        cnt++;
        if (cnt % 10 != 1)
        {
            cout << " ";
        }
        cout << prime[i];
        if (cnt % 10 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}