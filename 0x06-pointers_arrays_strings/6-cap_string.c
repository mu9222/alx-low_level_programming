#include "main.h"

/**
 * cap_string - function that changes all lowercase letters to uppercase
 * @str: string to change
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
<<<<<<< HEAD
		
			i++;

		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		i == 0)
			str[i] -= 32;
		i++;
=======
		{

			i++;

			if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			i == 0)
				str[i] -= 32;
		}
			i++;
>>>>>>> 8de7d5dabe301eb4fd7b3701f91725204436a87a
	}
	return (str);
}
