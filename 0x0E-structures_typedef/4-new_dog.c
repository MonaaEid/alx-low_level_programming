#include "dog.h"

/**
 * _strlen - returns the length of a string.
 * @s: string.
 * Return: length of s.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;

    return (len);
}

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i]; i++)
        dest[i] = src[i];

    dest[i] = '\0';

    return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int name_len, owner_len;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    name_len = _strlen(name);
    owner_len = _strlen(owner);

    new_dog->name = malloc(name_len + 1);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = malloc(owner_len + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    _strcpy(new_dog->name, name);
    _strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return (new_dog);
}

