//이름의 글자 수 출력하기
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char firstname[100], lastname[100];

	printf("성을 입력하시오 : ");
	scanf("%s", lastname);
	printf("이름을 입력하시오 : ");
	scanf("%s", firstname);

	printf("%s %s\n", lastname, firstname);
	printf("%*d %*d\n", strlen(lastname), strlen(lastname), strlen(firstname), strlen(firstname));
	
	return 0;
}
