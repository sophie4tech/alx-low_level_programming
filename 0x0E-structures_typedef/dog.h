#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function to create struct dog
 * @name: character to print
 * @age: number to print
 * @owner: character to print
 * Return: dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dg;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dg *new_dog(char *name, float age, char *owner);
void free_dog(dg *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif /* DOG_H */
