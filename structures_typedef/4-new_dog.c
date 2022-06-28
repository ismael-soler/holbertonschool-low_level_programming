#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Returns the lenght of the string
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int namelen, ownlen, i;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	namelen = _strlen(name);
	ownlen = _strlen(owner);

	doggy->name = malloc(namelen + 1);
	if (doggy->name == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(ownlen + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';
	for (i = 0; i < ownlen; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';
	doggy->age = age;

	return (doggy);
}
