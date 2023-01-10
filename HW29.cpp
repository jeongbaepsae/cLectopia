//고집수

#include <stdio.h>
#pragma warning(disable:4996)

int transNumber(int);//양의 정수를 각 자릿수로 분할해서 곱한 결과를 리턴하는 함수
int input1();//양의 정수만 입력 받아 리턴하는 함수(음수와 문자에 대한 예외처리)
int input2();
int input3();
void myflush();

int main()
{
	int p1, p2, N;
	p1 = input1();//시작수
	p2 = input2();//끝수
	N = input3();//고집수

	int i = 0, c = 0, k = 0;
	int num;
	printf("고집수가 %d인 숫자 출력\n", N);

	
	for (i = p1;i < p2;i++) {
		num=i;
		while (num >= 10) {
			num = transNumber(num);
			c++;
		}
		if (c == N) {
			printf("%d\n", i);
			k++;
		}
		c = 0;
	}
	printf("총 개수 : %d개", k);
	return 0;
}

int transNumber(int N)//양의 정수를 각 자릿수로 분할해서 /곱한 결과를 리턴하는 함수
{
	if (N >= 1000)
		N = (N / 1000) * ((N % 1000) / 100) * ((N % 100) / 10) * (N % 10);
	else if (N >=100 && N < 1000)
		N = (N / 100) * ((N % 100) / 10) * (N % 10);
	else if (N >= 10 && N < 100)
		N = (N / 10) * (N % 10);
	return N;
}

int input1()
{
	int p1;
	while (1) {
		printf("시작 값(P1) : ");
		scanf("%d", &p1);
		if (getchar()=='\n')
		if (p1 >= 100)
			break;
		else if (p1 < 100) {
			;
		}
		else if (0 == scanf("%d", &p1)) {
			myflush();
		}
	}
	return p1;
}

int input2()
{
	int p2;
	while (1) {
		printf("끝 값(P2) : ");
		scanf("%d", &p2);
		if (getchar() == '\n')
		if (p2 <= 10000) {
			break;
		}
		else if (p2 > 10000) {
			printf("재입력하세요.");
		}
		else if(0 == scanf("%d", &p2)) {
			myflush();
		}	
	}
	return p2;
}

int input3()
{
	int N;
	while (1) {
		printf("고집수(N) : ");
		scanf("%d", &N);
		if (getchar() == '\n')
		if (N <= 11 || N > 0) {
			break;
		}
		else if (N >= 11 || N < 0) {
			printf("재입력하세요.");
		}
		else if (0 == scanf("%d", &N)) {
			myflush();
		}
	}
	return N;
}

void myflush() {
	while (getchar() != '\n') {
		;
	}
}