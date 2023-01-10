//숫자 맞추기 게임


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#pragma warning(disable:4996)

int random(int);
int input();
int output(int, int);
void myflush();

int main()
{
	int ran, number;
	srand((unsigned int)time(NULL));
	ran = random(100) + 1;
	int i, count = 0;
	while(1)
	{
		number = input();
		output(ran, number);
		count++;
		if (ran == number)
		{
			break;
		}

	}
	printf("우와~ 맞았당~~ 추카추카~~ %d번째 만에 맞추셨습니다.\n", count);
	return 0;
}

int random(int n)
{
	int res;
	res = rand() % n;
	return res;
}

int input()
{
	int number;

	while (1) {
		printf("숫자를 입력하시오 : ");
		if (scanf("%d", &number) == 0) {
			printf("숫자를 입력하시오 :\n");
			myflush();
		}
		else {
			if (number >= 1 && number <= 100) {
				break;
			}
		}
	}
	return number;
}

void myflush() {
	char c;
	while ((c = getchar()) != '\n') {
		;
	}
}
int output(int ran, int number)
{
	while (1)
		if (number > ran)
		{
			printf("%d보다는 작습니다.\n", number);
			break;
		}
		else if (number < ran)
		{
			printf("%d보다는 큽니다.\n", number);
			break;
		}
		else
		{
			printf("");
			break;
		}
	return 0;
}
