#include <unistd.h>

/**
 * _putchar - write the character c to stout
 * @c : the character to ptint
 * Return : on success 1.
 * on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
