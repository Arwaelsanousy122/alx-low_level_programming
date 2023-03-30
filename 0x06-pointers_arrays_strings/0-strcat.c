#include "Main.h"
/**
* _strcat : function that concatenates two strings
*
*Return : pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char size_t n
size_t dest_len = strlen(dest);
size_t i;

for (i = 0; i < n && src[i] != '0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i]= '0';

return dest
}
