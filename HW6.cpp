#include<stdio.h>
#pragma warning(disable:4996)

int input();
void output(double);

int input()
{
	int f;
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &f);
	return f;
}
void output(double c)
{
	printf("���� �µ��� %.1lf���Դϴ�.\n", c);
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