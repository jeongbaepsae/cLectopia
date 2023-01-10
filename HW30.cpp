//2진수 변환 프로그램

#include <stdio.h>
#pragma warning(disable:4996)


int main() 
{ 
	int input = 0; 
	int res; 
	for (int i = 0;i <= 1;i = i + 1) {
		printf("10진수 정수를 입력하세요 : ");
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
