#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * _putchar only 2 times
 * Return: 0-14 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0, j <= 9; j++)
	{
		for (i = 0, i <= 14, i++)
		{
			if (i > 9)
				_putchar(i / 10) + ('0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}