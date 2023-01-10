#include<stdio.h>
#pragma warning(disable:4996)

int input();
void output(double);

int input()
{
	int f;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &f);
	return f;
}
void output(double c)
{
	printf("섭씨 온도는 %.1lf도입니다.\n", c);
	return;
}
int main()
{
	int far;
	double cel;
	far = input();
	cel = 5.0 / 9.0 * (far - 32);
	output(cel);
	return 0;
}