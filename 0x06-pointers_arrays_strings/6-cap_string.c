#include "main.h"
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

/**
 * separators - They separate words.
 *
 * @s: Int for the test.
 *
 * Return: Nothing.
 */

bool separators(char s)
{
	char separator_members[] = " \t\n,;.!?\"(){}";
	int a;

	for (a = 0; separator_members[a] != '\0'; a++)
	{
		if (s == separator_members[a])
		{
			return (true);
		}
	}
	return (false);
}
/**
 * *cap_string - This capitalizes all words.
 *
 * @str: First character
 *
 * Return: str
 */

char *cap_string(char *str)
{
	bool new_string = true;

	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (separators(str[a]))
		{
			new_string = true;
		}
		else if (new_string)
		{
			str[a] = toupper(str[a]);
			new_string = false;
		}
		else
		{
			str[a] = tolower(str[a]);
		}
	}

	return (str);
}
