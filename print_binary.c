#include "main.h"

/**
 * print_binary - print binary number
 * @list: list of arguments
 * Return: counter
*/
int print_binary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int array[32];
	int n;
	int counter = 0;

	if (num  == 0)
	{
		_putchar('0');
<<<<<<< HEAD
		counter++;
		return (counter);
=======
>>>>>>> d0ce6bab2f59679d909710c8f33a5e4f0d3580d5
	}
	while (num > 0)
	{
		array[counter++] = num % 2;
		num /= 2;
	}
	for (n = counter - 1; n >= 0; n--)
	{
		_putchar(array[n] + '0');
		counter++;
	}
	return (counter);
}
