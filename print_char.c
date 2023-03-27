#include "main.h"
#include <unistd.h>

/**
<<<<<<< HEAD
 * print_digit - print integers.
=======
 * print_char - print char
>>>>>>> a798b0277799c4bf16c4a3cb18f4463db2104b09
 *
 * @args: argument.
 *
 * Return: count of chars.
 */

<<<<<<< HEAD
int print_digit(va_list args)
{
	int decimal = 1;
	int count_fun = 0;
	long int digit = va_arg(args, int);
	long int digitaux;

	if (digit < 0)
	{
		count_fun += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
		return (count_fun += _putchar(digit + '0'));

	digitaux = digit;

	while (digitaux > 9)
	{
		decimal *= 10;
		digitaux /= 10;
	}
	while (decimal >= 1)
	{
		count_fun += _putchar(((digit / decimal) % 10) + '0');
		decimal /= 10;
	}

	return (count_fun);
=======
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
>>>>>>> a798b0277799c4bf16c4a3cb18f4463db2104b09
}
