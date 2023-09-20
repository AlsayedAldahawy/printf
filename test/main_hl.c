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

	len = _printf("mlx:%lx", 4848485);
        printf("\n");
	len2 = printf("olx:%lx", 4848485);
	        printf("\n");

	len = _printf("mLX:%lX", 4848485);
        printf("\n");
	len2 = printf("oLX:%lX", 4848485);
	        printf("\n");

	len = _printf("msx:%hx", 4848485);
        printf("\n");
	len2 = printf("osx:%hx", 4848485);
	        printf("\n");

	len = _printf("msX:%hX", 4848485);
        printf("\n");
	len2 = printf("osX:%hX", 4848485);
	        printf("\n");

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
