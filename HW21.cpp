//�ټ� ���� �л��� Ű�� �Է� �޾� �� ����� ����ϱ�

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	double height1, height2, height3, height4, height5;

	printf("1�� �л��� Ű��? ");
	scanf("%lf", &height1);
	printf("2�� �л��� Ű��? ");
	scanf("%lf", &height2);
	printf("3�� �л��� Ű��? ");
	scanf("%lf", &height3);
	printf("4�� �л��� Ű��? ");
	scanf("%lf", &height4);
	printf("5�� �л��� Ű��? ");
	scanf("%lf", &height5);
	double avg = (height1 + height2 + height3 + height4 + height5) / 5;
	printf("�ټ� ���� ��� Ű�� %.1fcm �Դϴ�.\n", avg);

	return 0;
}