//한줄에 다섯개씩 별 출력하기
//단일 반복문, if()

#include <stdio.h>
#pragma warning(disable:4996)

int input();

int main()
{
	int i, num;
	num = input();
	for (i = 0;i < num;i++)
	{
		printf("*");
		if (i % 5 == 4) 
			printf("\n");
	}
	return 0;
}

int input()
{
	int num;
	printf("정수 값을 입력하세요 : ");
	scanf("%d", &num);
	return num;
}