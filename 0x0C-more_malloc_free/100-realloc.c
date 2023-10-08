#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: void pointer to the newly allocated memory block
 * NULL if new_size is zero and ptr is not NULL
 * ptr if new_size is equal to old_size
 * NULL if malloc fails or if ptr is NULL and new_size is greater than 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

old_ptr = ptr;
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
new_ptr[i] = old_ptr[i];
}
else
{
for (i = 0; i < new_size; i++)
new_ptr[i] = old_ptr[i];
}

free(ptr);

return (new_ptr);
}
