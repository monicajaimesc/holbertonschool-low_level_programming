#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog structure
 * @name: dog's name char type
 * @age: dog's age float type
 * @owner: dog's owner
 */
/* forward declare a type "dog" to be a struct */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
