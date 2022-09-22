#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 *
 * cap_string -Entry point of program
 *
 * @str: character
 *
 * Retunr: succces
 */
char *cap_string(char *str)
{	
	int i = 0;

	bool start = true;

	while (str[i])
	{
		if (start && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			start = false;
		}
	       	else
		{
			str[i] = tolower(str[i]);
			if (str[i] == '.' || str[i] == '?' || str[i] == '!' || str[i] == ' ')
			{
				start = true;
			}
		}
		i++;
	}
	return str;
}
