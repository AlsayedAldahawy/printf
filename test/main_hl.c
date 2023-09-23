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

	len = _printf("%.*s", 6, "Best School !\n");
	printf("\n");
	len2 = printf("%.*s", 6, "Best School !\n");
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
