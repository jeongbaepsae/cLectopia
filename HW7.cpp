//주행거리와 시속을 입력 받아 주행시간을 계산하기
#include <stdio.h>
#pragma warning(disable:4996)

double input1();
double input1()
{
	double km;
	printf("거리를 입력하시오(km단위): ");
	scanf("%lf", &km);
	return km;
}
double input2();
double input2()
{
	double kmh;
	printf("시속을 입력하시오(km/h단위): ");
	scanf("%lf", &kmh);
	return kmh;
}
void output(double);
void output(double a, double b, double c,double d)
{
	printf("%.2fkm = > %.0f시간 %.0f분 %.3f초 소요됨\n", a, b, c, d);
	return;
}
int main()
{
	int hour, min;
	double km, kmh, sec;
	int i = 0;
	for (i = 0;i <= 2;i = i + 1)
	{
		km = input1();
		kmh = input2();
		hour = (km / kmh);
		min = ((km / kmh) - hour) * 60;
		sec = ((((km / kmh) - hour) * 60) - min) * 60;
		output(km, hour, min, sec);
		printf("\n");
	}
	return 0;
}



