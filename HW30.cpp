//2���� ��ȯ ���α׷�

#include <stdio.h>
#pragma warning(disable:4996)


int main() 
{ 
	int input = 0; 
	int res; 
	for (int i = 0;i <= 1;i = i + 1) {
		printf("10���� ������ �Է��ϼ��� : ");
		scanf_s("%d", &input);
		printf("%d(10) = ", input);
		for (int i = 31; i >= 0; i--) {
			res = 1 << i;
			printf("%d", input & res ? 1 : 0);
		}
		printf("(2)\n");
	}
	return 0; 
}
