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

	len = _printf("%#o", UINT_MAX);
	printf("\n");
	len2 = printf("%#o", UINT_MAX);
		printf("\n");
	printf("%d     %d\n", len, len2);

	len = _printf("%.8x", 1024);
	printf("\n");
	len2 = printf("%.8x", 1024);
		printf("\n");
	printf("%d     %d\n", len, len2);

	len = _printf("%08x", -1024);
	printf("\n");
	len2 = printf("%08x", -1024);
		printf("\n");
	printf("%d     %d\n", len, len2);

	len = _printf("%.8x", -1024);
	printf("\n");
	len2 = printf("%.8x", -1024);
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
