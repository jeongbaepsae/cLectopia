//���ٿ� �ټ����� �� ����ϱ�
//���� �ݺ���, if()

#include <stdio.h>
#pragma warning(disable:4996)

int input();

int main()
{
	int i, num;
	num = input();
	for (i = 0;i < num;i++)
	{
		printf("*");
		if (i % 5 == 4) 
			printf("\n");
	}
	return 0;
}

int input()
{
	int num;
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	return num;
}