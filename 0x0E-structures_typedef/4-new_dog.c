#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return length of string
 * @s: string to be evaluated
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * *_strcpy - copy string pointed by src
 * @dest: pointer to the buffer
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, x;

	length = 0;

	while (src[length] != '\0')
		length++;

	for (x = 0; x < length; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - creat a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
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
