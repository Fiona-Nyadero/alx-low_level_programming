#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_len - locates the index at the end of first word
 * @str: string to search
 *
 * Return: the index of the first word pointed by str
 */

int word_len(char *str)
{
	int index = 0, ct = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		ct++;
		index++;
	}

	return (ct);
}

/**
 * count_words - counts the number of words in a string
 * @str: string to search
 *
 * Return: Number of words in string
 */

int count_words(char *str)
{
	int index = 0, words = 0, ct = 0;

	for (index = 0; *(str + index); index++)
		ct++;

	for (index = 0; index < ct; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array
 * else NULL if fx fails
 * or if str is NULL
 * or if str is ""
 */

char **strtow(char *str)
{
	int index = 0, words, x, letters, y;
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (x = 0; x < words; x++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[x] = malloc(sizeof(char) * (letters + 1));

		if (strings[x] == NULL)
		{
			for (; x >= 0; x--)
				free(strings[x]);

			free(strings);
			return (NULL);
		}

		for (y = 0; y < letters; y++)
			strings[x][y] = str[index++];

		strings[x][y] = '\0';
	}

	strings[x] = NULL;

	return (strings);
}


