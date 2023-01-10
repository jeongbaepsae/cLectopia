//가위바위보

#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <time.h>

int input();
int random(int);
void output(int, int);

int main()
{
	int user, computer;
	int win=0 , lose=0 , same=0 ;
	char rock[] = { "바위" };
	char scissor[] = { "가위" };
	char paper[] = { "보" };
	srand((unsigned int)time(NULL));
	computer = random(3) + 1;
	
	while (1) {
		user = input();
		if (computer == 1) {
			if (user == 1) {
				same++;

			}
			else if (user == 2) {
				lose++;
				break;
			}
			else if (user == 3) {
				win++;
			}
		}
		else if (computer == 2) {
			if (user == 1) {
				win++;
			}
			else if (user == 2) {
				same++;	
			}
			else if (user == 3) {
				lose++;
				break;
			}
		}
		else if (computer == 3) {
			if (user == 1) {
				lose++;
				break;
			}
			else if (user == 2) {
				win++;
			}
			else if (user == 3) {
				same++;
			}
		}
		output(user, computer);
	}
	printf("%d승 %d무\n", win, same);
	return 0;
}
	

int input()
{
	int choose;
	
	while (1) {
		printf("바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
		scanf("%d", &choose);
		if (getchar() == '\n')
			break;
		else {
			printf("재입력해주세요\n");
			while (getchar() != '\n');
		}
	}
	return choose;
}

int random(int n)
{
	int res;
	res = rand() % n;
	return res;
}
void output(int u, int c)
{
	int win = 0, lose = 0, same = 0;
	char rock[] = { "바위" };
	char scissor[] = { "가위" };
	char paper[] = { "보" };

		if (c == 1) {
			if (u == 1) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 비겼습니다.\n", rock, rock);
			}
			else if (u == 2) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 졌습니다.\n", scissor, rock);	
			}
			else if (u == 3) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 이겼습니다.\n", paper, rock);
			}
		}
		else if (c == 2) {
			if (u == 1) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 이겼습니다.\n", rock, scissor);
			}
			else if (u == 2) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 비겼습니다.\n", scissor, scissor);
			}
			else if (u == 3) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 졌습니다.\n", paper, scissor);
			}
		}
		else if (c == 3) {
			if (u == 1) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 졌습니다.\n", rock, paper);
			}
			else if (u == 2) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 이겼습니다.\n", scissor, paper);
			}
			else if (u == 3) {
				printf("당신은 %s 선택, 컴퓨터는 %s 선택 : 비겼습니다.\n", paper, paper);
			}
		}
	return;
}
