//�ް� ���� ���α׷�

#include <stdio.h>
#pragma warning(disable:4996)

int input();

int main()
{
	int weight;
	int count = 0;
	while (1) {
		weight = input();
		if (weight < 150) {
			printf("���߸��� ������ �峭���� ������.\n");
		}
		else if (weight >= 150 && weight < 500) {
			count += 1;
			printf("�ް��� ���� : %d\n", count);
		}
		else if (weight >= 500) {
			printf("Ÿ���� ������ �峭���� ������\n");
		}
		if (count == 10) {
			printf("*****�ް� ������ �������ϴ�\n");
			break;
		}
	}
	return 0;
}

int input()
{
	int weight;
	while (1) {
		printf("����� ���Ը� �Է��ϼ���(����:g) : ");
		scanf("%d", &weight);
		if (getchar() == '\n')
			break;
		else {
			printf("���Է����ּ���\n");
			while (getchar() != '\n');
		}
	}
	return weight;
}