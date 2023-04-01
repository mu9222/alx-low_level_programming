#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: string to encodes
 * Return: str
 */

char *rot13(char *str)
{
	int i = 0;
	int j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
