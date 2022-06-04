#include <stdio.h>

/**
 * main- this is main function
 * Return: 0 if no error occured
 */
int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
