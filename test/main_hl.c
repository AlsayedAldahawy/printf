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

	len = _printf("m:%-6s%-6c", "Best", '\n');
	len2 = printf("o:%-6s%-6c", "Best", '\n');
	printf("%d    %d\n", len, len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("m:%-16s%-1c", "Best", '\n');
	len2 = printf("o:%-16s%-1c", "Best", '\n');
		printf("%d    %d", len, len2);

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
