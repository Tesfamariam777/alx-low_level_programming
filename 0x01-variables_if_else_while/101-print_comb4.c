#include <stdio.h>
/**
 * main- This is main function
 * Return: 0 runs correct
 */
int main(void)
{
	short num1;
	short num2;
	short num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = 1; num2 < 9; num2++)
		{
			for (num3 = 2; num3 < 10; num3++)
			{
				if (num1 >= num2 || num2 >= num3 || num1 >= num3)
					continue;
				putchar('0' + num1);
				putchar('0' + num2);
				putchar('0' + num3);
				if (num1 == 7 && num2 == 8 && num3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
