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


	printf("%lf���� %d�� %d�ð� %d�� %.2lf���Դϴ�.\n", day, jour, hour, min, sec);
	return 0;
}