//�̸��� ���� �� ����ϱ�
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char firstname[100], lastname[100];

	printf("���� �Է��Ͻÿ� : ");
	scanf("%s", lastname);
	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s", firstname);

	printf("%s %s\n", lastname, firstname);
	printf("%*d %*d\n", strlen(lastname), strlen(lastname), strlen(firstname), strlen(firstname));
	
	return 0;
}
