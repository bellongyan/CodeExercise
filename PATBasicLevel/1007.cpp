/*
让我们定义dn​为：dn​=pn+1​−pn​，其中pi​是第i个素数。显然有d1​=1，且对于n>1有dn​是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
现给定任意正整数N(<105)，请计算不超过N的满足猜想的素数对的个数。

输入格式:
输入在一行给出正整数N。

输出格式:
在一行中输出不超过N的满足猜想的素数对的个数。
*/

// @Author:longyan
// @Date:2022/5/23

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    // PTA中这样写会有一个测试点无法通过
    // for (int i = 5; i <= n; i++)
    for (int i = 3; i <= n - 2; i++)
    {
        if (isPrime(i) && isPrime(i + 2))
            count++;
    }
    printf("%d\n", count);
    return 0;
}

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
