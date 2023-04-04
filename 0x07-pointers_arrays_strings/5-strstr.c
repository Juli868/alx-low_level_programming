#include "main.h"
#include <stdio.h>

/**
 *_strstr- searches if there is a certain substring in a certain string
 *@haystack: string to check from
 *@needle: string to look for
 *Return: the value if found or null if not
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *uno = haystack;
		char *dos = needle;

		while (*uno == *dos && *dos != '\0')
		{
			uno++;
			dos++;
		}
		if (*dos == '\0')
			return (haystack);
	}
	return (NULL);
}
