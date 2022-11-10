#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 **/

char *create_array(unsigned int size, char c)

{

README.md char *str;

README.md unsigned int i;

README.md str = malloc(sizeof(char) * size);

README.md if (size == 0 || str == NULL)

README.md README.md return (NULL);

README.md for (i = 0; i < size; i++)

README.md README.md str[i] = c;

README.md return (str);

}
