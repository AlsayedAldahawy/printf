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
	long int test_v = LONG_MIN;
	len = _printf("mlx:%lo", test_v);
        printf("\n");
	len2 = printf("olx:%lo", test_v);
	        printf("\n");

	len = _printf("mLX:%lo", test_v);
        printf("\n");
	len2 = printf("oLX:%lo", test_v);
	        printf("\n");

	len = _printf("msx:%ho", test_v);
        printf("\n");
	len2 = printf("osx:%ho", test_v);
	        printf("\n");

	len = _printf("msX:%ho", test_v);
        printf("\n");
	len2 = printf("osX:%ho", test_v);
	        printf("\n");


	len = _printf("%ld", test_v);
	        printf("\n");

	len2 = printf("%ld", test_v);
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
