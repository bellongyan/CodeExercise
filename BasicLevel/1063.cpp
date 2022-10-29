/*
  在数学中，矩阵的“谱半径”是指其特征值的模集合的上确界。换言之，对于给定的 n 个复数空间的特征值 { a_1 + b_1i,⋯,a_n + b_ni }，它们的模为实部与虚部的平方和的开方，而“谱半径”就是最大模。

  现在给定一些复数空间的特征值，请你计算并输出这些特征值的谱半径。

  输入格式：
  输入第一行给出正整数 N（≤ 10 000）是输入的特征值的个数。随后 N 行，每行给出 1 个特征值的实部和虚部，其间以空格分隔。注意：题目保证实部和虚部均为绝对值不超过 1000 的整数。

  输出格式：
  在一行中输出谱半径，四舍五入保留小数点后 2 位。
 */

// @Author:longyan
// @Date:2022/10/25

#include <iostream>
#include <cmath>

using namespace std;

struct com {
	int r;     // 实部
	int v;     // 虚部
	double ri; //谱半径
};

int main() {
	int n;
	cin >> n;

	double max = -1;
	for (int i = 0; i < n; i++) {
		struct com j;
		cin >> j.r;
		cin >> j.v;
		j.ri = sqrt(j.r * j.r + j.v * j.v);
		if (j.ri > max)
			max = j.ri;
	}

	printf("%.2lf", max);

	return 0;
}
