//반복적으로 두 개의 정수를 입력 받아 두수의 차를 출력하시오.
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num1, num2;
	int res;
	while (1)
	{
		printf("두개의 정수를 입력하세요 : ");
		res= scanf("%d %d", &num1, &num2);
		if (res == 0 || res == 1) {
			break;
		}
		else {
			if (num1 > num2) {
				printf("%d - %d = %d\n", num1, num2, num1 - num2);
			}
			else {
				printf("%d - %d = %d\n", num2, num1, num2 - num1);
			}
		}
	}
	return 0;
}
