#include <stdio.h>

int main()
{
	double day = 365.2422;
	int jour, hour, min;
	double sec;
	
	jour = int(day);
	hour = int((day - jour) * 24);
	min = int((((day - jour) * 24) - hour) * 60);
	sec = (((((day - jour) * 24) - hour) * 60) - min) * 60;


	printf("%lf일은 %d일 %d시간 %d분 %.2lf초입니다.\n", day, jour, hour, min, sec);
	return 0;
}