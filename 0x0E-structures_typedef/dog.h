#ifndef DOG_H_
#define DOG_H_


/**
 * dog_h: typedef for struct dog
 */
typedef struct dog dog_h

/**
 * struct struct_dog - new type that defines elements
 *
 * @name: first element
 * @age: second element
 * @owner: third element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
