#include <stdio.h>

int main()
{
	int money = 278970;
	int m50000 = 50000, m10000 = 10000, m5000 = 5000, m1000 = 1000, m500 = 500, m100 = 100, m50 = 50, m10 = 10;

	printf("50000원권 => %d개\n", money / m50000);
	int money1 = money - 50000 * (money / m50000);

	printf("10000원권 => %d개\n", money1 / m10000);
	int money2 = money1 - 10000 * (money1 / m10000);

	printf("5000원권 => %d개\n", money2 / m5000);
	int money3 = money2 - 5000 * (money2 / m5000);

	printf("1000원권 => %d개\n", money3/ m1000);
	int money4 = money3 - 1000 * (money3 / m1000);

	printf("500원권 => %d개\n", money4 / m500);
	int money5 = money4 - 500 * (money4 / m500);

	printf("100원권 => %d개\n", money5 / m100);
	int money6 = money5 - 100 * (money5 / m100);

	printf("50원권 => %d개\n", money6 / m50);
	int money7 = money6 - 50 * (money6 / m50);

	printf("10원권 => %d개\n", money7 / m10);
	
	return 0;
}
