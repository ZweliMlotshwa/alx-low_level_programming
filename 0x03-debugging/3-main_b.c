#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program. Tests the print_remaining_days function.
 *
 * This function initializes the month, day, and year variables for testing
 * the print_remaining_days function. It then calls the print_remaining_days
 * function to display the remaining days in the year for the specified date.
 *
 * Return: Always 0 (Success)
 */
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

