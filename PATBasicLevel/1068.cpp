/*
  对于计算机而言，颜色不过是像素点对应的一个 24 位的数值。现给定一幅分辨率为 M×N 的画，要求你找出万绿丛中的一点红，即有独一无二颜色的那个像素点，并且该点的颜色与其周围 8 个相邻像素的颜色差充分大。
  
  输入格式：
  输入第一行给出三个正整数，分别是 M 和 N（≤ 1000），即图像的分辨率；以及 TOL，是所求像素点与相邻点的颜色差阈值，色差超过 TOL 的点才被考虑。随后 N 行，每行给出 M 个像素的颜色值，范围在 [0,2^24) 内。所有同行数字间用空格或 TAB 分开。
  
  输出格式：
  在一行中按照 (x, y): color 的格式输出所求像素点的位置以及颜色值，其中位置 x 和 y 分别是该像素在图像矩阵中的列、行编号（从 1 开始编号）。如果这样的点不唯一，则输出 Not Unique；如果这样的点不存在，则输出 Not Exist。
 */

// @Author:longyan
// @Date:2022/11/12

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int m, n, TOL;
vector<vector<int>> v;
int dir[8][2] = {{1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}};
bool judge(int i, int j)
{
    for (int k = 0; k < 8; k++)
    {
        int tx = i + dir[k][0];
        int ty = j + dir[k][1];
        if (tx >= 0 && tx < n && ty >= 0 && ty < m && v[i][j] - v[tx][ty] >= 0 - TOL && v[i][j] - v[tx][ty] <= TOL)
            return false;
    }
    return true;
}

int main()
{
    int cnt = 0, x = 0, y = 0;
    cin >> m >> n >> TOL;
    v.resize(n, vector<int>(m));
    map<int, int> mapp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            mapp[v[i][j]]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mapp[v[i][j]] == 1 && judge(i, j) == true)
            {
                cnt++;
                x = i + 1;
                y = j + 1;
            }
        }
    }

    if (cnt == 1)
        cout << "(" << y << ", " << x << "): " << v[x - 1][y - 1] << endl;
    else if (cnt == 0)
        cout << "Not Exist" << endl;
    else
        cout << "Not Unique" << endl;

    return 0;
}
