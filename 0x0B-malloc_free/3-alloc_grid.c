#include "main.h"

/**
 * alloc_grid - funct thet returns a pointer to a 2D array
 *
 * @width: int of width
 * @height: int height
 * Return: pointer to 2D
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i;

	ptr = malloc(sizeof(int **) * height);
	if (width <= 0 || height <= 0 || ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			return (NULL);
		}
	}
	return (ptr);
}
