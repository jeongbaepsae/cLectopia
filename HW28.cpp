//문자 종류별 카운트 프로그램

#include <stdio.h>

int main()
{
    char ch;
    int cenglish = 0;
    int cnumber = 0;
    int cblank = 0;
    int cetc = 0;

    printf("# 영문 문장을 입력 하시오. : \n");

    while ((ch = getchar()) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            cenglish++;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            cenglish++;
        }
        else if (ch >= '0' && ch <= '9') {
            cnumber++;
        }
        else if (ch == '\n' || ch == '\t' || ch == ' ') {
            cblank++;
        }
        else if (ch == '\b'){
            ;
        }
        else {
            cetc++;
        }
    }

    printf("* 영문자 대소문자 개수 : %d개\n", cenglish);
    printf("* 숫자문자 개수 : %d개\n", cnumber);
    printf("* 여백문자(space, tab, enter) 개수 : %d개\n", cblank);
    printf("* 그 외 기타문자 개수 : %d개\n", cetc);

    return 0;
}