#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int osec, hour, min, sec;
	printf("�ʼ��� �Է��Ͻÿ�: ");
	scanf("%d", &osec);
	
	hour = osec / 3600;
	min = (osec - (3600 * hour)) / 60; 
	sec = osec - (3600 * hour) - (60 * min);

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", osec, hour, min, sec);
	
	return 0;
}