//다섯 명의 학생의 키를 입력 받아 그 평균을 출력하기

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	double height1, height2, height3, height4, height5;

	printf("1번 학생의 키는? ");
	scanf("%lf", &height1);
	printf("2번 학생의 키는? ");
	scanf("%lf", &height2);
	printf("3번 학생의 키는? ");
	scanf("%lf", &height3);
	printf("4번 학생의 키는? ");
	scanf("%lf", &height4);
	printf("5번 학생의 키는? ");
	scanf("%lf", &height5);
	double avg = (height1 + height2 + height3 + height4 + height5) / 5;
	printf("다섯 명의 평균 키는 %.1fcm 입니다.\n", avg);

	return 0;
}