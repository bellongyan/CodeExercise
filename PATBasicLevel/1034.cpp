/*
本题要求编写程序，计算 2 个有理数的和、差、积、商。

输入格式：
输入在一行中按照 a1/b1 a2/b2 的格式给出两个分数形式的有理数，其中分子和分母全是整型范围内的整数，负号只可能出现在分子前，分母不为 0。

输出格式：
分别在 4 行中按照 有理数1 运算符 有理数2 = 结果 的格式顺序输出 2 个有理数的和、差、积、商。注意输出的每个有理数必须是该有理数的最简形式 k a/b，其中 k 是整数部分，a/b 是最简分数部分；若为负数，则须加括号；若除法分母为 0，则输出 Inf。题目保证正确的输出中没有超过整型范围的整数。
*/

// @Author:longyan
// @Date:2022/7/5

#include <iostream>
#include <cmath>

using namespace std;

long long a, b, c, d;

// 求最大公约数
long long gcd(long long t1, long long t2) {
	return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

// 显示函数
void func(long long m, long long n) {
	// 如果 n 等于 0 ，则输出 inf, 否则输出 0
	if (m * n == 0) {
		printf("%s", n == 0 ? "Inf" : "0");
		return ;
	}

	// 设置 ‘-’ 符号，当 m, n 中有一个为负数为 true
	bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));
	// 将 m, n 都换成正数来进行计算
	m = abs(m);
	n = abs(n);

	// 整数部分记为 x
	long long x = m / n;

	// 如果 flag 为 true 那么输出 "(-" 不然输出空字符串
	printf("%s", flag ? "(-" : "");
	
	// 如果整数部分不为 0 就输出整数部分
	if (x != 0) printf("%lld", x);
	
	// m 对 n 取余，如果为 0 再判断 flag 是否为 true, 是的话输出 ")" 补全括号 函数结束
	if (m % n == 0) {
		if (flag) printf(")");
		return ;
	}
	
	// 如果整数部分为 0 输出空字符串
	if (x != 0) printf(" ");
	
	// m 重新赋值
	m = m - x * n;
	
	// 计 t 为 m, n 的最小公约数
	long long t = gcd(m, n);
	
	// m, n 分别除最小公约数
	m = m / t;
	n = n / t;
	
	// 对得到的 m, n 进行输出
	printf("%lld/%lld%s", m, n, flag ? ")" : "");
}


int main() {
	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
	func(a, b);
	printf(" + ");
	func(c, d);
	printf(" = ");
	func(a * d + b * c, b * d);
	printf("\n");
	func(a, b);
	printf(" - ");
	func(c, d);
	printf(" = ");
	func(a * d - b * c, b * d);
	printf("\n");
	func(a, b);
	printf(" * ");
	func(c, d);
	printf(" = ");
	func(a * c, b * d);
	printf("\n");
	func(a, b);
	printf(" / ");
	func(c, d);
	printf(" = ");
	func(a * d, b * c);
	return 0;
}
