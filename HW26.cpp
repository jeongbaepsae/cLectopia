//����������

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
	char rock[] = { "����" };
	char scissor[] = { "����" };
	char paper[] = { "��" };
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
	printf("%d�� %d��\n", win, same);
	return 0;
}
	

int input()
{
	int choose;
	
	while (1) {
		printf("������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		scanf("%d", &choose);
		if (getchar() == '\n')
			break;
		else {
			printf("���Է����ּ���\n");
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
	char rock[] = { "����" };
	char scissor[] = { "����" };
	char paper[] = { "��" };

		if (c == 1) {
			if (u == 1) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �����ϴ�.\n", rock, rock);
			}
			else if (u == 2) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �����ϴ�.\n", scissor, rock);	
			}
			else if (u == 3) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �̰���ϴ�.\n", paper, rock);
			}
		}
		else if (c == 2) {
			if (u == 1) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �̰���ϴ�.\n", rock, scissor);
			}
			else if (u == 2) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �����ϴ�.\n", scissor, scissor);
			}
			else if (u == 3) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �����ϴ�.\n", paper, scissor);
			}
		}
		else if (c == 3) {
			if (u == 1) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �����ϴ�.\n", rock, paper);
			}
			else if (u == 2) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �̰���ϴ�.\n", scissor, paper);
			}
			else if (u == 3) {
				printf("����� %s ����, ��ǻ�ʹ� %s ���� : �����ϴ�.\n", paper, paper);
			}
		}
	return;
}
