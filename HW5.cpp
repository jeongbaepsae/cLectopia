#include <stdio.h>
#pragma warning(disable:4996)

double input();
void output(double);

double input()
{
	double a;
	printf("전기 사용량을 입력하세요(kw) :  ");
	scanf("%lf", &a);
	return a;

}
void output(double fee)
{
	printf("전기 사용요금은 %lf원입니다.\n", fee);
	return;
}

int main()
{
	double kw, fee, tax;
	kw = input();
	//printf("%lf", kw);
	tax = (660 + (kw * 88.5))*0.09;
	fee = 660 + (kw * 88.5) + tax;
	output(fee);

	return 0;
}
