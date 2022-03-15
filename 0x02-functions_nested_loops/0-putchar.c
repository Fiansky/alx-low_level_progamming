#include "main.h"

/**
   Description: prints _putchar
   Return: 0 (If it is a success)
 */


int main(void)
{
	int i = 0;
	char c[8] = "_putchar";

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
