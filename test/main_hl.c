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

	len = _printf("mlx:%lo", 4848485);
        printf("\n");
	len2 = printf("olx:%lo", 4848485);
	        printf("\n");

	len = _printf("mLX:%lo", 4848485);
        printf("\n");
	len2 = printf("oLX:%lo", 4848485);
	        printf("\n");

	len = _printf("msx:%ho", 4848485);
        printf("\n");
	len2 = printf("osx:%ho", 4848485);
	        printf("\n");

	len = _printf("msX:%ho", 4848485);
        printf("\n");
	len2 = printf("osX:%ho", 4848485);
	        printf("\n");


	len = _printf("%ld", LONG_MIN);
	        printf("\n");

	len2 = printf("%ld", LONG_MIN);
	        printf("\n");

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
