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

	len = _printf("In the middle %.*s of a sentence.\n", 6, "Best!");
	printf("\n");
	len2 = printf("In the middle %.*s of a sentence.\n", 6, "Best!");
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
