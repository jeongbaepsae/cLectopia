//����� ��� ���α׷�
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
	//�⺻���
	if (age >= 56) fee = num * 500;
	else if (age >= 20) fee = num * 1500;
	else if (age >= 14) fee = num * 1000;
	else if (age >= 8) fee = num * 700;
	else fee = num * 500;

	//��������
	if (num >= 5) discount = fee * 0.1;
	else discount = 0;

	//�������
	ffee = fee - discount;

	output(fee, discount, ffee);
	

	return 0;
}

int inputage()
{
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}

int inputnum()
{
	int num;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}

void output(int fee, int discount, int ffee)
{
	printf("����� => %d��\n", fee);
	printf("���αݾ� => %d��\n", discount);
	printf("�����ݾ� => %d��\n\n", ffee);
	return;
}