//세 과목 점수 입력 받아 총점, 평균 출력하기
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int his, lit, ent;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &his, &lit, &ent);
	int sum = his + lit + ent;
	double avg = sum / 3.0;
	printf("총점은 %d이고 평균은 %.2f입니다.", sum, avg);
}