#include <stdio.h>
/**
 * main- This is main function
 * Return: 0 runs correct
 */
int main(void)
{
        short num;

        for (num = 0; num <= 9; num++)
        {
                putchar('0' + num);
		if (num == 9)
			continue;
                putchar(',');
                putchar(' ');
        }
        putchar('\n');
        return (0);
}



