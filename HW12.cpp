//�̸��� �������� �Է� �޾� ������ ���� ���·� ����Ͻÿ�

#include <stdio.h>

int main()
{
	char name[100];

	printf("�̸��� �Է��Ͻÿ� : ");
	gets_s(name,sizeof(name));

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n", name);
	return 0;

}