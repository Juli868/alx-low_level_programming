#ifndef dog_h
#define dog_h
/**
 * struct dog - basic information about a dog
 * @name: name of the dog
 * @age:age of the dog
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif