#include <stdio.h>
/**
 * main - alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchart(n);
		n++;
	}
	putchart('\n')
    return (0);
}
