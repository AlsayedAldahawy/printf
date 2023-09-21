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

	len = _printf("%lX - %lX = %lX\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);		printf("\n");

	len2 = printf("%lX - %lX = %lX\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
		printf("\n");

	printf("%d : %d \n", len, len2);

	fflush(stdout);
	len = _printf("%l\n");

	len2 = printf("%l\n");
		printf("\n");

	printf("%d : %d \n", len, len2);

	fflush(stdout);

	return (0);
}
