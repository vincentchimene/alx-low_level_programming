#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that uses nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **myarray;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	myarray = malloc(sizeof(int) * height);

	if (myarray == NULL)
	{
		free(myarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		myarray[i] = malloc(sizeof(int) * width);
		if (myarray == NULL)
		{
			free(myarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			myarray[i][n] = 0;
		}
	}
	return (myarray);
}
