//������

#include <stdio.h>
#pragma warning(disable:4996)

int transNumber(int);//���� ������ �� �ڸ����� �����ؼ� ���� ����� �����ϴ� �Լ�
int input1();//���� ������ �Է� �޾� �����ϴ� �Լ�(������ ���ڿ� ���� ����ó��)
int input2();
int input3();
void myflush();

int main()
{
	int p1, p2, N;
	p1 = input1();//���ۼ�
	p2 = input2();//����
	N = input3();//������

	int i = 0, c = 0, k = 0;
	int num;
	printf("�������� %d�� ���� ���\n", N);

	
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
	printf("�� ���� : %d��", k);
	return 0;
}

int transNumber(int N)//���� ������ �� �ڸ����� �����ؼ� /���� ����� �����ϴ� �Լ�
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
		printf("���� ��(P1) : ");
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
		printf("�� ��(P2) : ");
		scanf("%d", &p2);
		if (getchar() == '\n')
		if (p2 <= 10000) {
			break;
		}
		else if (p2 > 10000) {
			printf("���Է��ϼ���.");
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
		printf("������(N) : ");
		scanf("%d", &N);
		if (getchar() == '\n')
		if (N <= 11 || N > 0) {
			break;
		}
		else if (N >= 11 || N < 0) {
			printf("���Է��ϼ���.");
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