//��,��� ���ϴ� ���α׷�
#include <stdio.h>
#pragma warning(disable:4996)

int input();
int yearCheck(int);
void output(int);

int main()
{
	int year, res;
	year = input();
	res=yearCheck(year);
	output(year);
	return 0;
}

int input()
{
	int year;
	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &year);
	return year;
}

int yearCheck(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				year = 1;
			else
				year = 0;
		}
		else
			year = 1;
	}
	else
		year = 0;

	if (year == 1) return 1;
	else return 0;
}

void output(int year)
{
	int res = yearCheck(year);
	if (res == 1) printf("%d���� ����(Leap year)�Դϴ�.\n", year);
	else printf("%d���� ���(Common year)�Դϴ�.\n", year);
	return;
}
