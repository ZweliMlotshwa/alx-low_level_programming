#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints a line to the standard error
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 57; /* length of the message */

	write(2, message, len);
	return (1);
}

