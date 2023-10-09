#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Defines a dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * new_dog - Creates a new dog structure and initializes its values.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog structure
 */
struct dog *new_dog(char *name, float age, char *owner)
{
    struct dog *new_dog;
    char *name_copy, *owner_copy;

    /* Allocate memory for the structure */
    new_dog = malloc(sizeof(struct dog));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate memory and copy the name */
    name_copy = strdup(name);
    if (name_copy == NULL)
    {
        free(new_dog);  // Free the structure if name allocation fails
        return (NULL);
    }

    /* Allocate memory and copy the owner */
    owner_copy = strdup(owner);
    if (owner_copy == NULL)
    {
        free(name_copy);  // Free name if owner allocation fails
        free(new_dog);    // Free the structure
        return (NULL);
    }

    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}

int main(void)
{
    struct dog *my_dog;

    my_dog = new_dog("Fido", 3.5, "Alice");

    if (my_dog == NULL)
    {
        printf("Error creating dog.\n");
        return (1);
    }

    printf("Name: %s\n", my_dog->name);
    printf("Age: %.1f\n", my_dog->age);
    printf("Owner: %s\n", my_dog->owner);

    /* Free the dog structure and its components */
    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return (0);
}

