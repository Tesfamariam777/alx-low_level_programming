#include <stdio.h>
/**
 *print- this function display the number in two digits
 *Return: it returns nothing
 */
void print(short num)
{
        short firstDigit;
        short lastDigit;

        if (num < 10)
        {
                putchar('0');
                putchar('0' + num);
        }
        else
        {
                lastDigit = num % 10;
                firstDigit = (num - lastDigit)/10;
                putchar('0' + firstDigit);
                putchar('0' + lastDigit);
        }
}

/**
 * main- This is main function
 * Return: 0 runs correct
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = 1; num2 < 100; num2++)
		{
			if (num1 >= num2)
				continue;
			print(num1);
			putchar(' ');
			print(num2);
			if (num1 == 98)
				continue;
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
