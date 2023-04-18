#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * new_dog - function that creates a new dog.
 * @name: name of the new dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenN, lenO;

	lenN = _strln(name);
	lenO = _strln(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenN + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (lenO + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);

}


/**
 * _strln - function that compute length of string.
 * @str: string to evaluate
 * Return: number of characters
 */

int _strln(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - function that copy str2 to str1.
 * @str1: string1
 * @str2: string2
 * Return: pointer to str1
 */

char *_strcpy(char *str1, char *str2)
{
	int i, j = 0;

	while (str2[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
		str1[i] = str2[i];

	str1[i] = '\0';
	return (str1);
}
