//�Էµ� ������ 8������ 16������ ����ϴ� ���α׷�
#include <stdio.h>
#pragma warning(disable:4996)

//input �Լ� �����
int input();
int input()
{
	int n;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &n);
	return n;
}

int main()
{
	int number;
	number = input();
	//��� ��� ���
	printf("�Էµ� ���� 8������ 0%o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ 0x%x�Դϴ�.\n", number);
	return 0;
}