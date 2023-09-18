#include "main.h"

/**
 * flag_finder - finds the flag inside the flag array.
 * @f: the flag to be founded.
 * @flag: the flag array to be searched.
 * Return: 1 if the flag ocuurs, otherwise 0.
 *
*/

int flag_finder(char f, char flag[])
{
	int i = 0;

	while (flag[i])
	{
		if (flag[i] == f)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * flag_eraser - empty the flag array.
 * @flag: the flag array to be erased.
 *
*/
void flag_eraser(char flag[])
{
	int i = 0;

	while (flag[i])
	{
		flag[i] = 0;
		i++;
	}
}
