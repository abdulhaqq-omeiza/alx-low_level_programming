#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc - function allocate memory for an array of @nmemb element of @size
* byte each and returns a pointer to the allocated memory
*
* @nmemb: lengh of array
* @size: size of each element
*
* Return: address of the array
*/
void *_calloc(unsigned int nmeb, unsigned int size)
{
char *arr;
unsigned int i;
if(nmemb == 0 || size == 0)
return (NULL);
arr = malloc(nmemb * size);
if(arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
arr[i] = 0;
return (arr);
}
