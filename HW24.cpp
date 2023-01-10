//달팽이 우물탈출 프로그램
#include <stdio.h>
#pragma warning(disable:4996)

int input();
int calcdate(int);
void output(int, int);

int main()
{
	int i;
	int depth, day;
	for (i = 0;i <= 1;i = i + 1)
	{
		depth = input();
		day = calcdate(depth);
		output(depth, day);
	}
	return 0;
}

int input()
{
	int depth;
	printf("우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &depth);
	return depth;
}

int calcdate(int depth)
{
	int length = 0;
	int count = 0;
	//height = height + 50;
	if (depth == 0) {
		return 0;
	}
	else {
		while (1)
		{
			length += 50;
			if (length >= depth)
			{
				count++;
				break;
			}
			else {
				length -= 20;
			}
			count++;
		}
	}
	return count;
}

	
void output(int depth, int day)
{
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", depth * 0.01, day);
	return;
}
