#include <stdio.h>
#include "main.h"

int main(void)
{
	int month, day, year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Testing with leap year: %02d/%02d/%04d\n", month, day, year);
	print_remaining_days(month, day, year);

	return (0);
}

