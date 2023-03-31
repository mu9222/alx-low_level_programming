#include "main.h"

/**
 * leet - function that changes all lowercase letters to uppercase
 * @str: string to change
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char let[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; j <= 10; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = num[j];
			}
		}
		i++;
	}
	return (str);
}
