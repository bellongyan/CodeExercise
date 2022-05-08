/*
7-8 出租车计价
本题要求根据某城市普通出租车收费标准编写程序进行车费计算。具体标准如下：
    起步里程为3公里，起步费10元；
    超起步里程后10公里内，每公里2元；
    超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
    营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。

输入格式:
输入在一行中给出输入行驶里程（单位为公里，精确到小数点后1位）与等待时间（整数，单位为分钟），其间以空格分隔。

输出格式:
在一行中输出乘客应支付的车费（单位为元），结果四舍五入，保留到元。
*/

// Author:longyan
// Date:2022/4/16

#include<stdio.h>
int main() {
	double price = 0.0;
	int dis_basic = 3, dis_level_10 = 10;
	int price_basic = 10, price_level_3 = 2, price_level_10 = 3;
	int price_time = 2, time_count = 0;
	int time;
	double distance;

	scanf("%lf%d", &distance, &time);
	time_count = time / 5;

	if(distance < dis_basic) {
		price = price_basic + price_time * time_count;
	} else if(distance < dis_level_10) {
		price = price_basic + (distance - dis_basic) * price_level_3 + price_time * time_count;
	} else {
		price = price_basic + price_level_3 * (dis_level_10 - dis_basic) + price_level_10 * (distance - dis_level_10) + price_time * time_count;
	}

	printf("%.0f\n", price);

	return 0;
}
