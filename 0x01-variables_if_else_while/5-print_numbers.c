#include <stdio.h>
/**
 * main-This is main function
 * Return:0 if correctly run
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
