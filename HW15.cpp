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
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &weight);
	return weight;
}

double inputheight()
{
	double height;
	printf("Ű�� �Է��ϼ���(m) : ");
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
	if (bmi >= 40.0) printf("����� BMI�� %.1f���� �����Դϴ�", bmi);
	else if (bmi >= 30.0) printf("����� BMI�� %.1f���� ���Դϴ�", bmi);
	else if (bmi >= 25.0) printf("����� BMI�� %.1f���� ��ü���Դϴ�", bmi);
	else if (bmi >= 18.5) printf("����� BMI�� %.1f���� ����ü���Դϴ�", bmi);
	else printf("����� BMI�� %.1f���� ��ü���Դϴ�", bmi);
}