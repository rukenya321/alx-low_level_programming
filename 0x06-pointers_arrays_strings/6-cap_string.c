#include "main.h"
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

/**
 * *cap_string - Entry point
 *
 * separators - They separate words.
 *
 * @s: Int for the test.
 *
 * Return: Nothing.
 */

bool separators(char s) /* separators - They separate words */
{
	char separator_members[] = " \t\n,;.!?\"(){}";
	int a;

	for (a = 0; separator_member[a] != '\0'; a++)
	{
		if (s == separator_member[i])
		{
			return (true);
		}
	}
	return (false);
}

char *cap_string(char *) /* *cap_string - This capitalizes all words */
{
	bool new_string = true;

	char *str;
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (separatror(str[a]))
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
