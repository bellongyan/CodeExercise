/*
  图像过滤是把图像中不重要的像素都染成背景色，使得重要部分被凸显出来。现给定一幅黑白图像，要求你将灰度值位于某指定区间内的所有像素颜色都用一种指定的颜色替换。
  
  输入格式：
  输入在第一行给出一幅图像的分辨率，即两个正整数 M 和 N（0<M,N≤500），另外是待过滤的灰度值区间端点 A 和 B（0≤A<B≤255）、以及指定的替换灰度值。随后 M 行，每行给出 N 个像素点的灰度值，其间以空格分隔。所有灰度值都在 [0, 255] 区间内。
  
  输出格式：
  输出按要求过滤后的图像。即输出 M 行，每行 N 个像素灰度值，每个灰度值占 3 位（例如黑色要显示为 000），其间以一个空格分隔。行首尾不得有多余空格。
 */

// @Author:longyan
// @Date:2022/11/12

#include <iostream>

using namespace std;

int main()
{
    int m, n, a, b, gray;
    cin >> m >> n >> a >> b >> gray;
    for (int i = 0; i < m; i++)
    {
        int grayDegree[501] = {0};
        for (int j = 0; j < n; j++)
        {
            cin >> grayDegree[j];
            if (grayDegree[j] >= a && grayDegree[j] <= b)
                grayDegree[j] = gray;
        }

        for (int k = 0; k < n; k++)
        {
            if (k != n - 1)
                printf("%03d ", grayDegree[k]);
            else
                printf("%03d\n", grayDegree[k]);
        }
    }

    return 0;
}
