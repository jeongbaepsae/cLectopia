//두 정수를 입력 받아 합, 차, 곱, 몫의 값을 출력하는 프로그램
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{	
	
	int num1, num2;
	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %.2f\n ", num1, num2, (float)num1 / num2);

	return 0;

}