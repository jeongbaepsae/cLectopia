#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int osec, hour, min, sec;
	printf("초수를 입력하시오: ");
	scanf("%d", &osec);
	
	hour = osec / 3600;
	min = (osec - (3600 * hour)) / 60; 
	sec = osec - (3600 * hour) - (60 * min);

	printf("%d초는 %d시간 %d분 %d초 입니다.\n", osec, hour, min, sec);
	
	return 0;
}