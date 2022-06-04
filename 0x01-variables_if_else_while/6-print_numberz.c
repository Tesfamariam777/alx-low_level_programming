#include <stdio.h>
/**
 * main-This is main function
 * Return: 0 if run correctly
 */
int main(void)
{
	short num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
