#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return:On sucess 
 * 
 */

int _putchar(char c)

{

	return write(STDOUT_FILENO, &c, 1);

}
