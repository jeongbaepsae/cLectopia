//ASCII code를 입력 받아 ASCII code에 해당 문자 출력하기

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num;
	printf("ASCII code값을 입력하시오 : ");
	scanf("%d", &num);
	printf("%d은 %c의 ASCII code 입니다.\n", num, num);
	return 0;
}
