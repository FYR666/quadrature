#include<stdio.h>
int main()
{
	double a, b, c;
	printf("请输入两个浮点数(中间以空格隔开)：");
	scanf_s("%lf %lf",&b,&c);// 用户输入两个浮点数
	a = b*c;// 两个浮点数相乘
	printf("结果为:%.2lf", a);//%.2lf(保留两位小数)
	return 0;
}