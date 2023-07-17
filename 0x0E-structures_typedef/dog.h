#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - a dog struct
 * @name: a dog name
 * @age: the age of the dog
 * @owner: the dog owner
 *
 * Description: a struct for a dog object
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
