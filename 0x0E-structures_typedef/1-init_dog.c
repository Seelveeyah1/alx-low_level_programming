/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog variable to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the dog's owner
 *
 * Description: This function initializes the attributes
 * of a struct dog variable using the provided name,
 * age, and owner's name.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
