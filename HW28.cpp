//���� ������ ī��Ʈ ���α׷�

#include <stdio.h>

int main()
{
    char ch;
    int cenglish = 0;
    int cnumber = 0;
    int cblank = 0;
    int cetc = 0;

    printf("# ���� ������ �Է� �Ͻÿ�. : \n");

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

    printf("* ������ ��ҹ��� ���� : %d��\n", cenglish);
    printf("* ���ڹ��� ���� : %d��\n", cnumber);
    printf("* ���鹮��(space, tab, enter) ���� : %d��\n", cblank);
    printf("* �� �� ��Ÿ���� ���� : %d��\n", cetc);

    return 0;
}