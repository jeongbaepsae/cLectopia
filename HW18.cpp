//입장료 계산 프로그램
#include <stdio.h>
#pragma warning(disable:4996)

int inputage();
int inputnum();
void output(int);

int main()
{
	int fee, discount, ffee, age, num;
	int i;

	
	age = inputage();
	num = inputnum();
	//기본요금
	if (age >= 56) fee = num * 500;
	else if (age >= 20) fee = num * 1500;
	else if (age >= 14) fee = num * 1000;
	else if (age >= 8) fee = num * 700;
	else fee = num * 500;

	//할인적용
	if (num >= 5) discount = fee * 0.1;
	else discount = 0;

	//최종요금
	ffee = fee - discount;

	output(fee, discount, ffee);
	

	return 0;
}

int inputage()
{
	int age;
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);
	return age;
}

int inputnum()
{
	int num;
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d", &num);
	return num;
}

void output(int fee, int discount, int ffee)
{
	printf("입장료 => %d원\n", fee);
	printf("할인금액 => %d원\n", discount);
	printf("결제금액 => %d원\n\n", ffee);
	return;
}