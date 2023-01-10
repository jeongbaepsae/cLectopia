#include <stdio.h>
#pragma warning(disable:4996)

int input();
int output(int);
int calc(int);

int main()
{
	int station, fee;
	int i;
	for (i = 0;i <= 4;i = i + 1)
	{
		station = input();
		fee= calc(station);
		output(fee);
	}
	return 0;
}

int input()
{
	int station;
	printf("역수를 입력하시오 : ");
	scanf("%d", &station);
	return station;
}

int output(int fee)
{
	printf("요금 : %d원\n", fee);
	return 0;
}

int calc(int station)
{
	int fee;

	if (station < 11)
	{
		if (station < 6) fee = 600;
		else fee = 800;
	}
	if (station > 10 && station < 13) fee = 800 + 100;
	if (station > 12 && station < 15) fee = 800 + 200;
	if (station > 14 && station < 17) fee = 800 + 300;
	if (station > 16 && station < 19) fee = 800 + 400;
	if (station > 18 && station < 21) fee = 800 + 500;

	return fee;
}
