#include "main.h"
#include <stdio.h>

/**
 * main - prints the name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: array that contains the command line arguments.
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
