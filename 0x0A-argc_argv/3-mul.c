#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiples two numbers
* @argc: number of command line argc
* @argv: the array that contains the command line argv
* Return: (0) when successfuk
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	/* Convert input arguments to integers*/
	if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1)
	{
	printf("Error\n");
	return (1);
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
