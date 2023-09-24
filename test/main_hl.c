#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("per + :%011o", 1024);
	printf("\n");
	len2 = printf("per + :%011o", 1024);
	printf("\n");
	printf("%d     %d\n", len, len2);

	len = _printf("per - :%.11o", 1024);
	printf("\n");
	len2 = printf("per - :%.11o", 1024);
	printf("\n");
	printf("%d     %d\n", len, len2);

	len = _printf("neg + :%-11p", 1024);
	printf("\n");
	len2 = printf("neg + :%-11p", 1024);
	printf("\n");
	printf("%d     %d\n", len, len2);

	len = _printf("neg - :%-15o", -1024);
	printf("\n");
	len2 = printf("neg - :%-15o", -1024);
	printf("\n");
	printf("%d     %d\n", len, len2);

	len = _printf("width - :%o", -1024);
	printf("\n");
	len2 = printf("width - :%o", -1024);
	printf("\n");
	printf("%d     %d\n", len, len2);
	len = _printf("width + :%o", 1024);
	printf("\n");
	len2 = printf("width + :%o", 1024);
	printf("\n");
	printf("%d     %d\n", len, len2);

		len = _printf("ptr + :%o", 1024);
	printf("\n");
	len2 = printf("ptr + :%o", 1024);
	printf("\n");
	printf("%d     %d\n", len, len2);
		len = _printf("ptr + :%o", -1024);
	printf("\n");
	len2 = printf("ptr + :%o", -1024);
	printf("\n");

	printf("%d     %d\n", len, len2);
	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}
