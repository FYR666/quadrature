#include<stdio.h>
int main()
{
	double a, b, c;
	printf("����������������(�м��Կո����)��");
	scanf_s("%lf %lf",&b,&c);// �û���������������
	a = b*c;// �������������
	printf("���Ϊ:%.2lf", a);//%.2lf(������λС��)
	return 0;
}