#include <stdio.h>
/**
 * main- This is main function
 * Return: 0 runs correct
 */
int main(void)
{
	short num1;
	short num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			if (num1 >= num2)
				continue;
			putchar('0' + num1);
			putchar('0' + num2);
			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

