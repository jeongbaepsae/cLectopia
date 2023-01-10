//PAY계산하기
//1주일간 일한 시간을 입력하여 총 수입, 세금, 실수입을 출력하시오
#include <stdio.h>
#pragma warning(disable:4996)

int inputhour();
int calcglosspay(int);
int calctax(int);
void output(int);

int main()
{
	int hour, glosspay, tax, income;
	hour = inputhour();
	glosspay = calcglosspay(hour);
	tax = calctax(glosspay);
	income = glosspay - tax;
	output(glosspay, tax, income);

	return 0;
}

int inputhour()
{
	int hour;
	printf("*1주일간의 근무시간을 입력하시오 : ");
	scanf("%d", &hour);
	return hour;
}

int calcglosspay(int hour)
{
	int basicpay, pluspay;
	int glosspay;

	if (hour <= 40) glosspay = hour * 3000;
	if (hour > 40) glosspay = 40 * 3000 + (hour - 40) * 3000 * 1.5;

	return glosspay;
}

int calctax(int glosspay)
{
	int tax;
	if (glosspay <= 100000) tax = glosspay * 0.15;
	else tax = (100000 * 0.15) + ((glosspay - 100000) * 0.25);
	return tax;
}

void output(int glosspay, int tax, int income)
{
	printf("# 총수입 : %d원\n", glosspay);
	printf("# 세  금 : %d원\n", tax);
	printf("# 실수입 : %d원\n", income);
	return;
}
