//������ �칰Ż�� ���α׷�
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
	printf("�칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
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
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", depth * 0.01, day);
	return;
}
