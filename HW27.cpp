//달걀 포장 프로그램

#include <stdio.h>
#pragma warning(disable:4996)

int input();

int main()
{
	int weight;
	int count = 0;
	while (1) {
		weight = input();
		if (weight < 150) {
			printf("메추리알 가지고 장난하지 마세요.\n");
		}
		else if (weight >= 150 && weight < 500) {
			count += 1;
			printf("달걀의 개수 : %d\n", count);
		}
		else if (weight >= 500) {
			printf("타조알 가지고 장난하지 마세요\n");
		}
		if (count == 10) {
			printf("*****달걀 포장이 끝났습니다\n");
			break;
		}
	}
	return 0;
}

int input()
{
	int weight;
	while (1) {
		printf("계란의 무게를 입력하세요(단위:g) : ");
		scanf("%d", &weight);
		if (getchar() == '\n')
			break;
		else {
			printf("재입력해주세요\n");
			while (getchar() != '\n');
		}
	}
	return weight;
}