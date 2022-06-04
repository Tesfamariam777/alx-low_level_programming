#include <stdio.h>

/**
 * main- This is main function
 * Return: 0 if correctly excuted
 */
int main(void)
{
	char lCase = 'a';
	char uCase = 'A';

	while (lCase <= 'z')
	{
		putchar(lCase);
		lCase++;
	}
	while (uCase <= 'Z')
	{
		putchar(uCase);
		uCase++;
	}
	putchar('\n');
	return (0);
}
