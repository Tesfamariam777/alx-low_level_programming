#include <stdio.h>
/**
 * main- This is main function
 * Return: 0 runs correct
 */
int main(void)
{
	short num = 0;
	char ch = 'a';

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
