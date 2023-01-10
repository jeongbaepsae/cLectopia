//문자열 생략하여 출력하기
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char s[100];
	int res;
	int i;
	for (i = 0;i <= 3;i = i + 1)
	{
		printf("* 문자열 입력 : ");
		scanf("%s", s);
		res = strlen(s) / 2;

		printf("[%*.*s...]\n", strlen(s), res, s);
	}

	return 0;
}
