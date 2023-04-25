#include <stdio.h>

/**
 * main - alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchart(alp[i]);
	}
	putchart('\n')
    return (0);
}
