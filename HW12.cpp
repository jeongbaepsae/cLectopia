//이름을 영문으로 입력 받아 다음과 같은 형태로 출력하시오

#include <stdio.h>

int main()
{
	char name[100];

	printf("이름을 입력하시오 : ");
	gets_s(name,sizeof(name));

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n", name);
	return 0;

}