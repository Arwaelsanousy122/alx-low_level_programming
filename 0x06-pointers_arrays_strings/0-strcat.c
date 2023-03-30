#include "main.h"

/**
* _strcat : function that concatenates two strings
*
* @dest : string
* @src : string
* Return : Always dest
*/
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest), i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
