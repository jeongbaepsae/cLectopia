//����Ÿ��� �ü��� �Է� �޾� ����ð��� ����ϱ�
#include <stdio.h>
#pragma warning(disable:4996)

double input1();
double input1()
{
	double km;
	printf("�Ÿ��� �Է��Ͻÿ�(km����): ");
	scanf("%lf", &km);
	return km;
}
double input2();
double input2()
{
	double kmh;
	printf("�ü��� �Է��Ͻÿ�(km/h����): ");
	scanf("%lf", &kmh);
	return kmh;
}
void output(double);
void output(double a, double b, double c,double d)
{
	printf("%.2fkm = > %.0f�ð� %.0f�� %.3f�� �ҿ��\n", a, b, c, d);
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



