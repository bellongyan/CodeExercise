/*
正整数 A 的“DA​（为 1 位整数）部分”定义为由 A 中所有 DA​ 组成的新整数 PA​。例如：给定 A=3862767，DA​=6，则 A 的“6 部分”PA​ 是 66，因为 A 中有 2 个 6。

现给定 A、DA​、B、DB​，请编写程序计算 PA​+PB​。
输入格式：

输入在一行中依次给出 A、DA​、B、DB​，中间以空格分隔，其中 0<A,B<109。
输出格式：

在一行中输出 PA​+PB​ 的值。
*/

// @Author:longyan
// @Date:2022/6/3

#include <iostream>
#include <cctype>
using namespace std;

int intlen(int num)
{
    int count = 1;
    while (num / 10 != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int intcnt(int num, int D)
{
    int cnt = 0;
    int len = intlen(num);
    for (int i = 0; i < len; i++)
    {
        if (num % 10 == D)
            cnt++;
        num /= 10;
    }
    return cnt;
}

int intp(int cnt, int D = 0)
{
    if (cnt == 0)
    {
        return 0;
    }
    else
    {
        int sum = 0;
        while (cnt-- != 0)
        {
            sum += D * 10;
            cnt--;
        }
        return sum + D;
    }
}

int main(int argc, char const *argv[])
{
    // string A, B;
    int A, B;
    int PA = 0, PB = 0;
    int DA, DB;
    cin >> A >> DA >> B >> DB;
    // cin >> A >> DA;
    // A = 3862767, DA = 6;

    int len_A = intlen(A);
    int cnt_A = intcnt(A, DA);
    PA = intp(cnt_A, DA);

    int len_B = intlen(B);
    int cnt_B = intcnt(B, DB);
    PB = intp(cnt_B, DB);

    int sum = 0;
    sum = PA + PB;
//     cout << PA << " " << PB << endl;
    cout << sum << endl;

    return 0;
}
