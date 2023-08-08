#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - multiplies two numbers
* @argc: number of command line arguments
* @argv: the array that contains the command line arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *endptr1, *endptr2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert input arguments to integers */
	num1 = strtol(argv[1], &endptr1, 10);
	num2 = strtol(argv[2], &endptr2, 10);

	if (*endptr1 != '\0' || *endptr2 != '\0')
	{
		printf("Error\n");
		return (1);
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

