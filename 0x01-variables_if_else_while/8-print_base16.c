#include <stdio.h>
/**
 *main - Entry point
 *Description: Print all the letters except q and e
 *Return: always 0
 */
int main(void)
{
	int n;
	int m;

		for (n = 48; n <= 58; n++)
		{
			putchar(n);
		}
		for (m = 97; m <= 103; m++)
		{
			putchar (m);
		}
		putchar('\n');
		return (0);
}
