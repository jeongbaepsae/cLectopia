#include <stdio.h>
#pragma warning(disable:4996)

double inputweight();
double inputheight();
double calbmi(double);
void output(double);

int main()
{
	double weight, height, bmi;
	weight = inputweight();
	height = inputheight();
	bmi = calbmi(weight, height);
	output(bmi);
	return 0;
}

double inputweight()
{
	double weight;
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &weight);
	return weight;
}

double inputheight()
{
	double height;
	printf("키를 입력하세요(m) : ");
	scanf("%lf", &height);
	return height;
}

double calbmi(double weight, double height)
{
	double bmi;
	bmi = weight / (height * height);
	return bmi;
}

void output(double bmi)
{
	if (bmi >= 40.0) printf("당신의 BMI는 %.1f으로 고도비만입니다", bmi);
	else if (bmi >= 30.0) printf("당신의 BMI는 %.1f으로 비만입니다", bmi);
	else if (bmi >= 25.0) printf("당신의 BMI는 %.1f으로 과체중입니다", bmi);
	else if (bmi >= 18.5) printf("당신의 BMI는 %.1f으로 정상체중입니다", bmi);
	else printf("당신의 BMI는 %.1f으로 저체중입니다", bmi);
}