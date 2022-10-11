#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * @d: initializer variable
 *
 * Return: returns 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
