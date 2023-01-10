//입력된 정수를 8진수와 16진수로 출력하는 프로그램
#include <stdio.h>
#pragma warning(disable:4996)

//input 함수 선언부
int input();
int input()
{
	int n;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &n);
	return n;
}

int main()
{
	int number;
	number = input();
	//계산 결과 출력
	printf("입력된 값은 8진수로 0%o입니다.\n", number);
	printf("입력된 값은 16진수로 0x%x입니다.\n", number);
	return 0;
}