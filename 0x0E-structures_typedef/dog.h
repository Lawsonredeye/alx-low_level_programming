#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - structure for dog profile
 * @name: name placeholder
 * @age: age placeholder
 * @owner: owner placeholder
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
#endif
