#include <stdio.h>

int main()
{
	int money = 278970;
	int m50000 = 50000, m10000 = 10000, m5000 = 5000, m1000 = 1000, m500 = 500, m100 = 100, m50 = 50, m10 = 10;

	printf("50000���� => %d��\n", money / m50000);
	int money1 = money - 50000 * (money / m50000);

	printf("10000���� => %d��\n", money1 / m10000);
	int money2 = money1 - 10000 * (money1 / m10000);

	printf("5000���� => %d��\n", money2 / m5000);
	int money3 = money2 - 5000 * (money2 / m5000);

	printf("1000���� => %d��\n", money3/ m1000);
	int money4 = money3 - 1000 * (money3 / m1000);

	printf("500���� => %d��\n", money4 / m500);
	int money5 = money4 - 500 * (money4 / m500);

	printf("100���� => %d��\n", money5 / m100);
	int money6 = money5 - 100 * (money5 / m100);

	printf("50���� => %d��\n", money6 / m50);
	int money7 = money6 - 50 * (money6 / m50);

	printf("10���� => %d��\n", money7 / m10);
	
	return 0;
}
