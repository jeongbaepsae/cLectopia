//���� ���߱� ����


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
	printf("���~ �¾Ҵ�~~ ��ī��ī~~ %d��° ���� ���߼̽��ϴ�.\n", count);
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
		printf("���ڸ� �Է��Ͻÿ� : ");
		if (scanf("%d", &number) == 0) {
			printf("���ڸ� �Է��Ͻÿ� :\n");
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
			printf("%d���ٴ� �۽��ϴ�.\n", number);
			break;
		}
		else if (number < ran)
		{
			printf("%d���ٴ� Ů�ϴ�.\n", number);
			break;
		}
		else
		{
			printf("");
			break;
		}
	return 0;
}
