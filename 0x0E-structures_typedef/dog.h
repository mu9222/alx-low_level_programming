#ifndef dog_h
#define dog_h

/**
 * struct dog - short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
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
char *_strcpy(char *str1, char *str2);
int _strln(char *str);
void free_dog(dog_t *d);

#endif
