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
	int list = 0, cnt = 0;

	while (*(str + list) && *(str + list) != ' ')
	{
		cnt++;
		list++;
	}

	return (cnt);
}

/**
 * count_words - counts the number of words in a string
 * @str: string to search
 *
 * Return: Number of words in string
 */

int count_words(char *str)
{
	int list = 0, xword = 0, cnt = 0;

	for (list = 0; *(str + list); list++)
		cnt++;

	for (list = 0; list < cnt; list++)
	{
		if (*(str + list) != ' ')
		{
			xword++;
			list += word_len(str + list);
		}
	}

	return (xword);
}

/**
 * strtow - splits a string into single words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 * else NULL if fx fails
 * or if str is NULL
 * or if str is ""
 */

char **strtow(char *str)
{
	int list = 0, xword, a, yletter, b;
	char **arrstrings;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	xword = count_words(str);
	if (xword == 0)
		return (NULL);

	arrstrings = malloc(sizeof(char *) * (xword + 1));
	if (arrstrings == NULL)
		return (NULL);

	for (a = 0; a < xword; a++)
	{
		while (str[list] == ' ')
			list++;
		yletter = word_len(str + list);
		arrstrings[a] = malloc(sizeof(char) * (yletter + 1));
		if (arrstrings[a] == NULL)
		{
			for (; a >= 0; a--)
				free(arrstrings[a]);
			free(arrstrings);
			return (NULL);
		}

		for (b = 0; b < yletter; b++)
			arrstrings[a][b] = str[list++];

		arrstrings[a][b] = '\0';
	}

	arrstrings[a] = NULL;

	return (arrstrings);
}
