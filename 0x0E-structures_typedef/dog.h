#ifndef DOG_LIKE_MACRO_
#define DOG_LIKE_MACRO_

#include <stdio.h>

/**
 * struct struct_dog - new type that defines elements
 *
 * @name: first element
 * @age: second element
 * @owner: third element
 */

struct struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct struct dog;

#endif
