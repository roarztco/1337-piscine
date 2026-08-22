#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int t;
    int fill;
    int sep_len;
    int str_len;
    char *p;
    char *reserved;

    i = 0;
    str_len = 0;
    if(size == 0)
    {
        p = malloc(1);
        if(p == NULL)
            return NULL;
        *p = '\0';
        return p;
    }
    while(i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            str_len++;
            j++;
        }
        i++;
    }
    sep_len = ft_strlen(sep);
    reserved = malloc(sizeof(char) * (str_len + (sep_len * (size - 1)) + 1));
    if(reserved == NULL)
        return NULL;
    i = 0;
    fill = 0;
    while(i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            reserved[fill] = strs[i][j];
            j++;
            fill++; 
        }
        if(i < size - 1)
        {
            t = 0;
            while(sep[t])
            {
                reserved[fill] = sep[t];
                fill++;
                t++;
            }
        }
        i++;
    }
    reserved[fill] = '\0';
    return reserved;
}