#include <stdio.h>
/**
 * main- This is main function
 * Return: 0 if it runs correctly
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
