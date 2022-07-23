/*
本题要求实现一种数字加密方法。首先固定一个加密用正整数 A，对任一正整数 B，将其每 1 位数字与 A 的对应位置上的数字进行以下运算：对奇数位，对应位的数字相加后对 13 取余——这里用 J 代表 10、Q 代表 11、K 代表 12；对偶数位，用 B 的数字减去 A 的数字，若结果为负数，则再加 10。这里令个位为第 1 位。

输入格式：
输入在一行中依次给出 A 和 B，均为不超过 100 位的正整数，其间以空格分隔。

输出格式：
在一行中输出加密后的结果。
*/

// @Author:longyan
// @Date:2022/7/23

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end()), reverse(b.begin(), b.end());
    int lena = a.length(), lenb = b.length();
    if (lena > lenb)
        b.append(lena - lenb, '0');
    if (lenb > lena)
        a.append(lenb - lena, '0');

    string str = "0123456789JQK", output = "";

    for (int i = 0; i < a.length(); i++)
    {
        if (i % 2 == 0)
        {
            output += str[(a[i] - '0' + b[i] - '0') % 13];
        }
        else
        {
            int ans = b[i] - a[i];
            if (ans < 0)
                ans += 10;
            output += str[ans];
        }
    }
    reverse(output.begin(), output.end());
    cout << output << endl;
    return 0;
}