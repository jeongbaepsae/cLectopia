//�� ���� ���� �Է� �޾� ����, ��� ����ϱ�
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int his, lit, ent;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &lit, &ent);
	int sum = his + lit + ent;
	double avg = sum / 3.0;
	printf("������ %d�̰� ����� %.2f�Դϴ�.", sum, avg);
}