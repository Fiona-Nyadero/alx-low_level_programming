#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog attributes
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Attributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
