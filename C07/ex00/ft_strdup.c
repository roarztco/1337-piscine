#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
char *ft_strdup(char *src)
{
    int i;
    char *p;

    i = 0;
    while(src[i])
        i++;
    i++;
    p = malloc(sizeof(char) * i);
    if(p == NULL)
        return NULL;
    return (ft_strcpy(p, src));
}