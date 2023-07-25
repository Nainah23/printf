#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the char to be printed
 * Return: 1 on success as printed char len
 * On error, 0
 */
int _putchar(char c)
{
	int ret = write(1, &c, 1);

	if (ret == 1)
		return (1);
	return (0);
}
