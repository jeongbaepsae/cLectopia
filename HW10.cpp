//�� ������ �Է� �޾� ��, ��, ��, ���� ���� ����ϴ� ���α׷�
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{	
	
	int num1, num2;
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %.2f\n ", num1, num2, (float)num1 / num2);

	return 0;

}