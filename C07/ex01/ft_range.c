#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *p;

    if(min < max)
    {
        p = malloc(sizeof(int) * (max - min));
        if(p == NULL)
            return NULL;
        i = 0;
        while(min < max)
        {
            p[i] = min;
            min++;
            i++;
        }
        return (p);
    }
    return NULL;
}